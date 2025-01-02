// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterIsle",
    products: [
        .library(name: "TreeSitterIsle", targets: ["TreeSitterIsle"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterIsle",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterIsleTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterIsle",
            ],
            path: "bindings/swift/TreeSitterIsleTests"
        )
    ],
    cLanguageStandard: .c11
)
