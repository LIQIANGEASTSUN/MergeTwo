using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeBoardEnergy : ProtoBaseProxy<MergeBoardEnergy>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string AdDesc;

		public int AdId;

		public string AdReward;

		public static readonly FieldCodec<int> _repeated_featureAhead_codec;

		public readonly RepeatedField<int> FeatureAhead;

		public static readonly FieldCodec<string> _repeated_freeReward_codec;

		public readonly RepeatedField<string> FreeReward;

		public string Image;

		public static readonly FieldCodec<int> _repeated_marketIncrease_codec;

		public readonly RepeatedField<int> MarketIncrease;

		public int XXX_RowIdentifier { get; set; }

		public MergeBoardEnergy()
		{
		}

		public MergeBoardEnergy(MergeBoardEnergy other)
		{
		}

		public override MergeBoardEnergy Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
