using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class MergeItem : ProtoBaseProxy<MergeItem>
	{
		public static readonly string FullName;

		public int Id;

		public int Tid;

		public int State;

		public int X;

		public int Y;

		public uint Com;

		public ComDying ComDying;

		public ComClickSource ComClickSource;

		public ComChest ComChest;

		public ComBubble ComBubble;

		public ComAutoSource ComAutoSource;

		public ComBox ComBox;

		public ComEatingSource ComEatingSource;

		public ComSkill ComSkill;

		public ComActivity ComActivity;

		public int StateConf;

		public ComToolSource ComToolSource;

		public ComSpecialBox ComSpecialBox;

		public ComMixSource ComMixSource;

		public ComTrigSource ComTrigSource;

		public ComActiveSource ComActiveSource;

		public ComActivityToken ComActivityToken;

		public ComChoiceBox ComChoiceBox;

		public MergeItem()
		{
		}

		public MergeItem(MergeItem other)
		{
		}

		public override MergeItem Clone()
		{
			return null;
		}

		public override void InternalWriteTo(ref WriteContext output)
		{
		}

		public override int ProxyCalculateSize()
		{
			return 0;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
