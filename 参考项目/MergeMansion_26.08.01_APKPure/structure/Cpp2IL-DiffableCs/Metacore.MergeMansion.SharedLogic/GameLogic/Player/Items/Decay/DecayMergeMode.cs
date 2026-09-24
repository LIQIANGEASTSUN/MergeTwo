namespace GameLogic.Player.Items.Decay;

[MetaSerializable]
public enum DecayMergeMode : int
{
	Reset = 0,
	Min = 1,
	Average = 2,
	Max = 3,
	Sum = 4,
}

