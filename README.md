# Google-Hashcode-2019

### Generate Scoring Calculator
srglue /usr/local/bin/srlua calculator.lua hashcode_calculator

OR

lua solution/calculator.lua <inputfile> <resultfile>

### Introduction
Today, there are more photos then ever. What should we do with all these pictures? In this challenge, we will compose a slideshow out of a photo collection.

### Task
Given a list of photos and tags, arrange the photos in a slideshow that is as interesting as possible.

## Problem Description
##### Photos
A photo is described by:
- tags: [tag1, tag2, tag3]
- orientation: horizontal or vertical

##### Slideshow
A slideshow is an ordered list of slides. A slide contains:
- 1 horizontal || 2 vertical pictures
- the tags of the included pictures

### Input data set
##### File Format
The input is a plain text file with line termination with '/n'
The first line contains the number of photos in the collection
The next N lines contain:
- Orientation (H/V)
- Number of tags (integer)
- The actual tags

```
4
H 3 cat beach sun
V 2 selfie smile
V 2 garden selfie
H 2 garden cat
```

### Submission data set
##### File Format
The output file starts with the number of slides S in the slideshow.
The next S lines describe the individual slides and contain:
- The ID/IDS of one/two pictures within the slides.

```
3
0
3
1 2
```

### Scoring
The slideshow is based on how interesting the transistions are between slides. We need something in common between two slides to preserve continuity, but enough difference to keep the audience engaged.

For two slides, the interest factor is the minimum of:
- The number of common tags between S1 and S2.
- The number of tags in S1 but not S2
- The number of tags in S2 but not S1
