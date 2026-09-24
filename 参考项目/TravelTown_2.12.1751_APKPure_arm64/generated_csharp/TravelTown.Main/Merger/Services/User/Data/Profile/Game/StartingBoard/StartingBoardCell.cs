using System;
using MergeEngine.Configuration.Board;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.Model;
using Newtonsoft.Json;

namespace Merger.Services.User.Data.Profile.Game.StartingBoard
{
	[Serializable]
	public class StartingBoardCell
	{
		[JsonProperty("item")]
		public MergeItemWeakReference Item;

		[JsonProperty("locked")]
		public bool Locked;

		[JsonProperty("boxed")]
		public bool Boxed;

		[JsonProperty("levelLock")]
		public int LevelLock;

		[JsonProperty("blockerArt")]
		public string BlockerArt;

		[JsonProperty("boxedType")]
		public UnboxingType UnboxingType;

		[JsonProperty("interactionAmount")]
		public int InteractionAmount;

		[JsonProperty("resourceType")]
		public PlayerResourceEnum InteractionResource;

		public MergeBoardItem ToMergeBoardItem()
		{
			return null;
		}
	}
}
