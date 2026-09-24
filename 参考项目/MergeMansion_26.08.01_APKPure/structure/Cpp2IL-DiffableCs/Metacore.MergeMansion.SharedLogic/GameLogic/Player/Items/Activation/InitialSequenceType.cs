namespace GameLogic.Player.Items.Activation;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum InitialSequenceType : int
{
	Global = 0,
	MergeItemInstance = 1,
	BoardInstance = 2,
}

