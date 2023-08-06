params ["_vehicle"];

private _time = 0;
private _totaltime = 0;

// items take quarter a second
// magazines take 1
// weapons & containers (backpacks) take 1.5

// [time, count, classname, itemtype]
private _events = [];
private _assets = [_vehicle] call TWC_Box_Transfer_fnc_getCargo;

{
	_x params ["_type", "_classname", "_count"];
	
	_timeMod = 1;
	switch (_type) do {
		case "backpack";
		case "weapon": { _timeMod = 1; };
		case "item": { _timeMod = 0.1; };
		default { _timeMod = 0.5; };
	};
	
	_time = (_timeMod);
	_totaltime = _totaltime + (_count * _timeMod);
	_time = (_totaltime);
	_events pushBack [_time, _count, _classname, _type];
} forEach _assets;
//systemchat ("total " + (str _totaltime));
[_events, _totaltime]