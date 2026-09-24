using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MicMilestone : ProtoBaseProxy<MicMilestone>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Cost;

		public int EventGroup;

		public int EventMainTheme;

		public int EventSettleTheme;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public int ExtraScore;

		public static readonly MapField<int, int>.Codec _map_extraToken_codec;

		public readonly MapField<int, int> ExtraToken;

		public int Token;

		public int XXX_RowIdentifier { get; set; }

		public MicMilestone()
		{
		}

		public MicMilestone(MicMilestone other)
		{
		}

		public override MicMilestone Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
