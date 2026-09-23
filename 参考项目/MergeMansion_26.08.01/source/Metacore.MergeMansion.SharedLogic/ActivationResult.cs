using Metaplay.Core.Model;

[MetaSerializable]
public enum ActivationResult
{
	Nothing = 0,
	ItemAdded = 1,
	ItemAddedAndRemoved = 2,
	Collected = 3
}
