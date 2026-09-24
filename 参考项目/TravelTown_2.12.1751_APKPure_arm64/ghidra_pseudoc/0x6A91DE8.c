/* Ghidra 12.1.2 native pseudocode; RVA 0x6A91DE8; Merger.MergeBoard.Handlers.CollectableItemsGrantProcessor.GrantResource; status ok */


/* WARNING: Possible PIC construction at 0x06b92048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9204c) */
/* WARNING: Removing unreachable block (ram,0x06b92050) */
/* WARNING: Removing unreachable block (ram,0x06b92074) */
/* WARNING: Removing unreachable block (ram,0x06b92084) */
/* WARNING: Removing unreachable block (ram,0x06b92098) */
/* WARNING: Removing unreachable block (ram,0x06b920a4) */
/* WARNING: Removing unreachable block (ram,0x06b9210c) */
/* WARNING: Removing unreachable block (ram,0x06b9213c) */
/* WARNING: Removing unreachable block (ram,0x06b922e0) */
/* WARNING: Removing unreachable block (ram,0x06b92300) */
/* WARNING: Removing unreachable block (ram,0x06b92344) */
/* WARNING: Removing unreachable block (ram,0x06b92354) */
/* WARNING: Removing unreachable block (ram,0x06b92368) */
/* WARNING: Removing unreachable block (ram,0x06b9238c) */
/* WARNING: Removing unreachable block (ram,0x06b923b8) */
/* WARNING: Removing unreachable block (ram,0x06b9239c) */
/* WARNING: Removing unreachable block (ram,0x06b923e0) */
/* WARNING: Removing unreachable block (ram,0x06b923e4) */
/* WARNING: Removing unreachable block (ram,0x06b923f0) */
/* WARNING: Removing unreachable block (ram,0x06b923fc) */
/* WARNING: Removing unreachable block (ram,0x06b923c4) */
/* WARNING: Removing unreachable block (ram,0x06b92424) */
/* WARNING: Removing unreachable block (ram,0x06b9242c) */
/* WARNING: Removing unreachable block (ram,0x06b92438) */
/* WARNING: Removing unreachable block (ram,0x06b92450) */
/* WARNING: Removing unreachable block (ram,0x06b92458) */
/* WARNING: Removing unreachable block (ram,0x06b92480) */
/* WARNING: Removing unreachable block (ram,0x06b92494) */
/* WARNING: Removing unreachable block (ram,0x06b92508) */
/* WARNING: Removing unreachable block (ram,0x06b9249c) */
/* WARNING: Removing unreachable block (ram,0x06b924b4) */
/* WARNING: Removing unreachable block (ram,0x06b924bc) */
/* WARNING: Removing unreachable block (ram,0x06b924e4) */
/* WARNING: Removing unreachable block (ram,0x06b924c8) */
/* WARNING: Removing unreachable block (ram,0x06b924d4) */
/* WARNING: Removing unreachable block (ram,0x06b924f0) */
/* WARNING: Removing unreachable block (ram,0x06b923a4) */
/* WARNING: Removing unreachable block (ram,0x06b9215c) */
/* WARNING: Removing unreachable block (ram,0x06b92190) */
/* WARNING: Removing unreachable block (ram,0x06b92174) */
/* WARNING: Removing unreachable block (ram,0x06b921a8) */
/* WARNING: Removing unreachable block (ram,0x06b92228) */
/* WARNING: Removing unreachable block (ram,0x06b9226c) */

void Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__GrantResource
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_0774e908;
  puVar1 = PTR_DAT_0774e900;
  if ((bRam0000000007e2a7ee & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e908);
    func_0x03280a18(PTR_DAT_0774ea10);
    func_0x03280a18(PTR_DAT_0774e900);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_07780650);
    bRam0000000007e2a7ee = 1;
  }
  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fe1fa4(lVar3,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    func_0x04fe2d68(lVar3,*(undefined8 *)PTR_DAT_07780650,param_2,*(undefined8 *)PTR_DAT_0774ea10);
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07773688) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_06b91f0c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07773688,3);
LAB_06b91f0c:
                    /* WARNING: Could not recover jumptable at 0x06b91f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,param_3,param_4,1,param_5,lVar3,1,puVar4[1]);
      return;
    }
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07832250;
  if ((bRam0000000007e2a7f0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772b48);
    func_0x03280a18(PTR_DAT_0777f5b8);
    func_0x03280a18(PTR_DAT_07772b50);
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_077d95a0);
    func_0x03280a18(PTR_DAT_077751d0);
    func_0x03280a18(PTR_DAT_077751c8);
    func_0x03280a18(PTR_DAT_077751c0);
    func_0x03280a18(PTR_DAT_0777f5d0);
    func_0x03280a18(PTR_DAT_07771f40);
    func_0x03280a18(PTR_DAT_077cc610);
    func_0x03280a18(PTR_DAT_077751d8);
    func_0x03280a18(PTR_DAT_07832258);
    func_0x03280a18(PTR_DAT_07832250);
    bRam0000000007e2a7f0 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

