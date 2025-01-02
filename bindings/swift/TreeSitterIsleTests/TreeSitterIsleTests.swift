import XCTest
import SwiftTreeSitter
import TreeSitterIsle

final class TreeSitterIsleTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_isle())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Isle grammar")
    }
}
