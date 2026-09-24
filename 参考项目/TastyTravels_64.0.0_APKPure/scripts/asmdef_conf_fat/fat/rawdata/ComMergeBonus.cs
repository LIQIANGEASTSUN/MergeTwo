using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeBonus : ProtoBaseProxy<ComMergeBonus>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int AutoPickUp;

		public int BonusCount;

		public int BonusId;

		public FuncType FuncType;

		public bool IsInventoryAutoUse;

		public bool IsScaleAnim;

		public string ToolScoreFeature;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeBonus()
		{
		}

		public ComMergeBonus(ComMergeBonus other)
		{
		}

		public override ComMergeBonus Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
