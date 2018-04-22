A train switching yard has an input track, k > 0 holding tracks, and an output track. Tracks are all
connected (no discontinuity). Each holding track has a dead end, but is long enough to hold all n cars.
On the input track are n > 0 train cars (e.g., box cars). The box cars are uniquely labeled and are
identified with numbers 1, 2, …, n (n > 0). Initially, the train on the input track has its car labels random
permutation read left to right. The car on the leftmost side of the train of cars is the first car. The first
car of any train of cars on the input track or any of the holding tracks can be moved.

Using the k > 0 holding tracks, the train cars are to be put on the output track in increasing order when
read left to right. When cars leave the input track they cannot be put back. Cars can be put on the
output track directly from the input track or from any of the holding tracks. The goal or final state of the
train switching year problem is reached when all n cars are on the output track in increasing order from
left to right.

The object of this train switching problem is to find a sequence of moves using the above-mentioned
constraints to reach the final state. After reaching the final state, print the sequence of moves. If no
sequence of moves is possible, then this must be indicated as “No solution.” Do not print the moves
up to the point of discovering no solution. 