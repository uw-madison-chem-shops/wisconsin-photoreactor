tracespace -L ./gerber/*.gbr ./gerber/*.drl -b.color.sm="rgba(255, 0, 0, 0.75)"
inkscape -z --export-filename top.png -w 3450 *top.svg
inkscape -z --export-filename bottom.png -w 3450 *bottom.svg
