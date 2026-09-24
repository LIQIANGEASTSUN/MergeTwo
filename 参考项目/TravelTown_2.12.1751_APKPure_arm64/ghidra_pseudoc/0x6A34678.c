/* Ghidra 12.1.2 native pseudocode; RVA 0x6A34678; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.GetEntityForItemView; status ok */


/* WARNING: Possible PIC construction at 0x06b34910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b34914) */
/* WARNING: Removing unreachable block (ram,0x06b34918) */
/* WARNING: Removing unreachable block (ram,0x06b34944) */
/* WARNING: Removing unreachable block (ram,0x06b34970) */
/* WARNING: Removing unreachable block (ram,0x06b34978) */
/* WARNING: Removing unreachable block (ram,0x06b34994) */
/* WARNING: Removing unreachable block (ram,0x06b349b4) */
/* WARNING: Removing unreachable block (ram,0x06b349d0) */
/* WARNING: Removing unreachable block (ram,0x06b34a04) */
/* WARNING: Removing unreachable block (ram,0x06b34aa8) */
/* WARNING: Removing unreachable block (ram,0x06b34aec) */
/* WARNING: Removing unreachable block (ram,0x06b34b04) */
/* WARNING: Removing unreachable block (ram,0x06b34b0c) */
/* WARNING: Removing unreachable block (ram,0x06b34b34) */
/* WARNING: Removing unreachable block (ram,0x06b34b18) */
/* WARNING: Removing unreachable block (ram,0x06b34b24) */
/* WARNING: Removing unreachable block (ram,0x06b34b40) */
/* WARNING: Removing unreachable block (ram,0x06b34b80) */
/* WARNING: Removing unreachable block (ram,0x06b34ce0) */
/* WARNING: Removing unreachable block (ram,0x06b34cac) */
/* WARNING: Removing unreachable block (ram,0x06b34cc4) */

undefined8
Merger_MergeBoard_View_Items_MergeBoardItemsContainer__GetEntityForItemView
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [12];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000007e2a563 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f4b0);
    func_0x03280a18(PTR_DAT_0782f4b8);
    func_0x03280a18(PTR_DAT_0782f4c0);
    func_0x03280a18(PTR_DAT_0782f4c8);
    func_0x03280a18(PTR_DAT_077c08a0);
    func_0x03280a18(PTR_DAT_077c08a8);
    bRam0000000007e2a563 = 1;
  }
  puVar2 = PTR_DAT_0782f4c0;
  puVar1 = PTR_DAT_0782f4b8;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
    auVar7 = func_0x03280cac();
    if (auVar7._8_4_ == 1) {
      plVar4 = (long *)func_0x072ce910(auVar7._0_8_);
      lVar6 = *plVar4;
      func_0x072ce920();
      func_0x0515fcf0(&uStack_50,uRam0000000007e2a000);
      if (lVar6 == 0) {
        return 0;
      }
      func_0x03280ca4(lVar6);
    }
    func_0x0515fcf0(&uStack_50,uRam0000000007e2a000);
    func_0x03365958(auVar7._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
    puVar1 = PTR_DAT_0782f4d0;
    if ((bRam0000000007e2a4c0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07750a98);
      func_0x03280a18(PTR_DAT_0774e758);
      func_0x03280a18(PTR_DAT_07772358);
      func_0x03280a18(PTR_DAT_077bdeb0);
      func_0x03280a18(PTR_DAT_0782f4d8);
      func_0x03280a18(PTR_DAT_0777a488);
      func_0x03280a18(PTR_DAT_0782f4e0);
      func_0x03280a18(PTR_DAT_0782f4e8);
      func_0x03280a18(PTR_DAT_0782f4f0);
      func_0x03280a18(PTR_DAT_077c0858);
      func_0x03280a18(PTR_DAT_077bdeb8);
      func_0x03280a18(PTR_DAT_077c2998);
      func_0x03280a18(PTR_DAT_077c2990);
      func_0x03280a18(PTR_DAT_077bce38);
      func_0x03280a18(PTR_DAT_0782f4f8);
      func_0x03280a18(PTR_DAT_0782f500);
      func_0x03280a18(PTR_DAT_0782f508);
      func_0x03280a18(PTR_DAT_0782f4d0);
      func_0x03280a18(PTR_DAT_0782f4a0);
      func_0x03280a18(PTR_DAT_0782f510);
      bRam0000000007e2a4c0 = 1;
    }
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
    return uVar5;
  }
  func_0x04fe31ac(&uStack_50,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_0782f4b0);
  do {
    uVar3 = func_0x0515fbd0(&uStack_50,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      break;
    }
    uVar5 = uStack_40;
  } while (lStack_38 != param_2);
  func_0x0515fcf0(&uStack_50,*(undefined8 *)puVar1);
  return uVar5;
}

