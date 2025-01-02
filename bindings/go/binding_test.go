package tree_sitter_isle_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_isle "github.com/eagr/tree-sitter-isle/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_isle.Language())
	if language == nil {
		t.Errorf("Error loading Isle grammar")
	}
}
