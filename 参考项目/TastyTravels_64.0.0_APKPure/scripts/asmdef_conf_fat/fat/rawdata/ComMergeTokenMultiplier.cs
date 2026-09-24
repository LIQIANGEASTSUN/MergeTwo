using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeTokenMultiplier : ProtoBaseProxy<ComMergeTokenMultiplier>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int EffectType;

		public int Time;

		public string TipsIcon;

		public string TipsPrefab;

		public static readonly FieldCodec<int> _repeated_token_codec;

		public readonly RepeatedField<int> Token;

		public int TokenMultiplier;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeTokenMultiplier()
		{
		}

		public ComMergeTokenMultiplier(ComMergeTokenMultiplier other)
		{
		}

		public override ComMergeTokenMultiplier Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
