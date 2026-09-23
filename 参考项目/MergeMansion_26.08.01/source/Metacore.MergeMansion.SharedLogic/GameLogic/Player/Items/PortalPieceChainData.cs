using System.Collections.Generic;

namespace GameLogic.Player.Items
{
	public struct PortalPieceChainData
	{
		public readonly int Portal;

		public readonly List<int> PortalPieces;

		public PortalPieceChainData(int portal, List<int> portalPieces)
		{
			Portal = 0;
			PortalPieces = null;
		}
	}
}
