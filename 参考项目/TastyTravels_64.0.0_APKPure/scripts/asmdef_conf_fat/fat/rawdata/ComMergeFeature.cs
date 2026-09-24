using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeFeature : ProtoBaseProxy<ComMergeFeature>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public FeatureEntry Feature;

		public int Param;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeFeature()
		{
		}

		public ComMergeFeature(ComMergeFeature other)
		{
		}

		public override ComMergeFeature Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
