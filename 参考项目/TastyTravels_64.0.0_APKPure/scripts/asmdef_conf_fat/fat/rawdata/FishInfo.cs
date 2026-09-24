using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FishInfo : ProtoBaseProxy<FishInfo>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string Icon;

		public string IconAni;

		public string IconDark;

		public string Name;

		public int RandomWeight;

		public int Rarity;

		public static readonly FieldCodec<string> _repeated_repeatConvert_codec;

		public readonly RepeatedField<string> RepeatConvert;

		public static readonly FieldCodec<string> _repeated_star_codec;

		public readonly RepeatedField<string> Star;

		public static readonly FieldCodec<int> _repeated_weight_codec;

		public readonly RepeatedField<int> Weight;

		public int XXX_RowIdentifier { get; set; }

		public FishInfo()
		{
		}

		public FishInfo(FishInfo other)
		{
		}

		public override FishInfo Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
