namespace GameLogic.Inventory;

[ForceExplicitEnumValues]
[MetaSerializable]
public enum RentableInventoryState : int
{
	Inactive = 0,
	Expired = 1,
	ExpiredPrompted = 2,
	Active = 3,
}

