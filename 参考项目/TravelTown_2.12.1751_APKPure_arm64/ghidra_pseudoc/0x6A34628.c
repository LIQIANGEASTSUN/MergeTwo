/* Ghidra 12.1.2 native pseudocode; RVA 0x6A34628; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.GetAllItemViews; status ok */


/* WARNING: Possible PIC construction at 0x06b34910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b34948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b34914) */
/* WARNING: Removing unreachable block (ram,0x06b34918) */
/* WARNING: Removing unreachable block (ram,0x06b34944) */
/* WARNING: Removing unreachable block (ram,0x06b3494c) */
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

long Merger_MergeBoard_View_Items_MergeBoardItemsContainer__GetAllItemViews(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  if ((bRam0000000007e2a562 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f4a8);
    bRam0000000007e2a562 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar8 = *(long *)PTR_DAT_0782f4a8;
    lVar3 = *(long *)(lVar5 + 0x40);
    if (lVar3 == 0) {
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0xf0) + 0x135) & 1) == 0)
      {
        func_0x0325681c();
      }
      uVar4 = func_0x03280ca0();
      func_0x04816728(uVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0xf8))
      ;
      *(undefined8 *)(lVar5 + 0x40) = uVar4;
      func_0x032809c4((long *)(lVar5 + 0x40),uVar4);
      lVar3 = *(long *)(lVar5 + 0x40);
    }
    return lVar3;
  }
  auVar10 = func_0x03280cac();
  uStack_40 = 0x6b34678;
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
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lVar5 = *(long *)(auVar10._0_8_ + 0x48);
  if (lVar5 == 0) {
    auVar9 = func_0x03280cac();
    if (auVar9._8_4_ == 1) {
      plVar7 = (long *)func_0x072ce910(auVar9._0_8_);
      lVar5 = *plVar7;
      func_0x072ce920();
      func_0x0515fcf0(&uStack_70,uRam0000000007e2a000);
      if (lVar5 == 0) {
        return 0;
      }
      func_0x03280ca4(lVar5);
    }
    func_0x0515fcf0(&uStack_70,uRam0000000007e2a000);
    func_0x03365958(auVar9._0_8_);
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
    lVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
    return lVar5;
  }
  func_0x04fe31ac(&uStack_70,lVar5,*(undefined8 *)PTR_DAT_0782f4b0);
  do {
    uVar6 = func_0x0515fbd0(&uStack_70,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      lVar5 = 0;
      break;
    }
    lVar5 = lStack_60;
  } while (lStack_58 != auVar10._8_8_);
  func_0x0515fcf0(&uStack_70,*(undefined8 *)puVar1);
  return lVar5;
}

