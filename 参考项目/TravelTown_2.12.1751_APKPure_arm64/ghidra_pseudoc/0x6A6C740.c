/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6C740; Merger.MergeBoard.Systems.ItemDiscoverySystem.DiscoverExistingItemsOnInitialize; status ok */


/* WARNING: Possible PIC construction at 0x06b6c808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b6c80c) */
/* WARNING: Removing unreachable block (ram,0x06b6c888) */
/* WARNING: Removing unreachable block (ram,0x06b6c8a4) */
/* WARNING: Removing unreachable block (ram,0x06b6c8ac) */
/* WARNING: Removing unreachable block (ram,0x06b6c8d4) */
/* WARNING: Removing unreachable block (ram,0x06b6c8b8) */
/* WARNING: Removing unreachable block (ram,0x06b6c8c4) */
/* WARNING: Removing unreachable block (ram,0x06b6c8e0) */
/* WARNING: Removing unreachable block (ram,0x06b6c8f4) */
/* WARNING: Removing unreachable block (ram,0x06b6c904) */
/* WARNING: Removing unreachable block (ram,0x06b6c914) */
/* WARNING: Removing unreachable block (ram,0x06b6c91c) */
/* WARNING: Removing unreachable block (ram,0x06b6c944) */
/* WARNING: Removing unreachable block (ram,0x06b6c928) */
/* WARNING: Removing unreachable block (ram,0x06b6c934) */
/* WARNING: Removing unreachable block (ram,0x06b6c950) */
/* WARNING: Removing unreachable block (ram,0x06b6ca34) */
/* WARNING: Removing unreachable block (ram,0x06b6c960) */
/* WARNING: Removing unreachable block (ram,0x06b6c970) */
/* WARNING: Removing unreachable block (ram,0x06b6c978) */
/* WARNING: Removing unreachable block (ram,0x06b6c9a0) */
/* WARNING: Removing unreachable block (ram,0x06b6c984) */
/* WARNING: Removing unreachable block (ram,0x06b6c990) */
/* WARNING: Removing unreachable block (ram,0x06b6c9ac) */

ulong Merger_MergeBoard_Systems_ItemDiscoverySystem__DiscoverExistingItemsOnInitialize
                (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined1 auVar8 [12];
  
  if ((bRam0000000007e2a6cc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830fe8);
    func_0x03280a18(PTR_DAT_07830ff0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07830ff8);
    func_0x03280a18(PTR_DAT_07830fd0);
    func_0x03280a18(PTR_DAT_07831018);
    bRam0000000007e2a6cc = 1;
  }
  if (*(long *)(param_2 + 8) == 0) {
    func_0x03280cac();
    func_0x03280cac();
    do {
      auVar8 = func_0x03280ca4(param_2);
      if (auVar8._8_4_ != 1) {
        uVar2 = (ulong)*(ushort *)(lRam0000000007e2a000 + 0x12e);
        if (uVar2 == 0) goto LAB_06b6cb40;
        piVar7 = (int *)(*(long *)(lRam0000000007e2a000 + 0xb0) + 8);
        goto LAB_06b6cb28;
      }
      plVar4 = (long *)func_0x072ce910(auVar8._0_8_);
      param_2 = *plVar4;
      func_0x072ce920();
      uVar2 = (ulong)*(ushort *)(lRam0000000007e2a000 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lRam0000000007e2a000 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar3 = (undefined8 *)(lRam0000000007e2a000 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b6ca90;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(0x7e2a000,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6ca90:
      uVar2 = (*(code *)*puVar3)(0x7e2a000,puVar3[1]);
    } while (param_2 != 0);
  }
  else {
    uVar2 = func_0x03ec47bc(*(long *)(param_2 + 8),*(undefined8 *)PTR_DAT_07831018);
    if ((uVar2 & 1) != 0) goto SUB_06b6cb80;
  }
  return uVar2;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_06b6cb28:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar3 = (undefined8 *)(lRam0000000007e2a000 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06b6cb5c;
    }
  }
LAB_06b6cb40:
  puVar3 = (undefined8 *)func_0x03256b10(0x7e2a000,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b6cb5c:
  (*(code *)*puVar3)(0x7e2a000,puVar3[1]);
  func_0x03365958(auVar8._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
SUB_06b6cb80:
  puVar1 = PTR_DAT_07831020;
  if ((bRam0000000007e2a6d4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831020);
    bRam0000000007e2a6d4 = 1;
  }
  lVar5 = *(long *)puVar1;
  lVar6 = *(long *)(lVar5 + 0x38);
  if (lVar6 == 0) {
    func_0x03256878(lVar5);
    lVar6 = *(long *)(lVar5 + 0x38);
  }
  if ((*(byte *)(*(long *)(lVar6 + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar2 = func_0x03280ca0();
  func_0x042db6cc(uVar2,0,**(undefined8 **)(lVar5 + 0x38),(*(undefined8 **)(lVar5 + 0x38))[2]);
  return uVar2;
}

