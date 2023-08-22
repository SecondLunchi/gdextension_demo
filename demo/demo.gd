extends DEMO

var demo
var demoi
# Called when the node enters the scene tree for the first time.
func _ready():
	demo = DEMO.new()
	demo.set_sample(50)
	demoi = demo.get_sample()
# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	for i in demoi:
		print(demoi)
		demoi -= 1
