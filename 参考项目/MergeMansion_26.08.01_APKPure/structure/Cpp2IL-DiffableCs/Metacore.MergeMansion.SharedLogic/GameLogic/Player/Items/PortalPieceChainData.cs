namespace GameLogic.Player.Items;

public struct PortalPieceChainData
{
	public readonly int Portal; //Field offset: 0x0
	public readonly List<Int32> PortalPieces; //Field offset: 0x8

	public PortalPieceChainData(int portal, List<Int32> portalPieces) { }

}

