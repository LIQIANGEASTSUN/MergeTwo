using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class BoardActionRequirements
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> AutospawnRequirements { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> ShopRequirements { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> EnergyModeRequirements { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> SellRequirements { get; set; }

		public BoardActionRequirements()
		{
		}

		public BoardActionRequirements(List<PlayerRequirement> autospawnRequirements, List<PlayerRequirement> shopRequirements, List<PlayerRequirement> energyModeRequirements, List<PlayerRequirement> sellRequirements)
		{
		}

		public bool MatchesRequirements(IPlayer player, BoardActionType actionType)
		{
			return false;
		}

		public List<PlayerRequirement> GetRequirements(BoardActionType actionType)
		{
			return null;
		}

		public bool MatchesRequirements(IPlayer player, List<PlayerRequirement> requirements)
		{
			return false;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
