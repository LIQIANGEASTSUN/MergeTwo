using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FishRarity : ProtoBaseProxy<FishRarity>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string BookImg;

		public string Color;

		public string ColorDesc;

		public string IconBg;

		public string Name;

		public FishRarityType RarityType;

		public int XXX_RowIdentifier { get; set; }

		public FishRarity()
		{
		}

		public FishRarity(FishRarity other)
		{
		}

		public override FishRarity Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
