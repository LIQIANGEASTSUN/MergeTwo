using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class AutoFingerInfo : ProtoBaseProxy<AutoFingerInfo>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public AutoFinger Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ActiveLv;

		public bool IsHideMerge;

		public int Priority;

		public int ShutdownLv;

		public int Time;

		public int XXX_RowIdentifier { get; set; }

		public AutoFingerInfo()
		{
		}

		public AutoFingerInfo(AutoFingerInfo other)
		{
		}

		public override AutoFingerInfo Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
