// swift-tools-version:5.0
import PackageDescription

let package = Package(
	name: "CorePlot",
	products: [
		.library(name: "CorePlot", targets: ["CorePlot"]),
	],
	targets: [
		.target(name: "CorePlot"),
		.testTarget(name: "CorePlotTests", dependencies: [.target(name: "CorePlot")])
	]
)
