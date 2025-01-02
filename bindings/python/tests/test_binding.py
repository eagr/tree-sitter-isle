from unittest import TestCase

import tree_sitter, tree_sitter_isle


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_isle.language())
        except Exception:
            self.fail("Error loading Isle grammar")
