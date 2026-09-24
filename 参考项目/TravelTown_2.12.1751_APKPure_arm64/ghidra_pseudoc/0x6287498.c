/* Ghidra 12.1.2 native pseudocode; RVA 0x6287498; MergeEngine.ECS.Systems.InventorySystem.TryMoveItemsFromInventoryToProducerInventory; status ok */

/* WARNING: Possible PIC construction at 0x0638784c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06387c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06387cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06387c48) */
/* WARNING: Removing unreachable block (ram,0x06387c60) */
/* WARNING: Removing unreachable block (ram,0x06387c78) */
/* WARNING: Removing unreachable block (ram,0x06387850) */
/* WARNING: Removing unreachable block (ram,0x06387864) */
/* WARNING: Removing unreachable block (ram,0x0638786c) */
/* WARNING: Removing unreachable block (ram,0x06387880) */
/* WARNING: Removing unreachable block (ram,0x06387888) */
/* WARNING: Removing unreachable block (ram,0x06387898) */
/* WARNING: Removing unreachable block (ram,0x063878ac) */
/* WARNING: Removing unreachable block (ram,0x063878b0) */
/* WARNING: Removing unreachable block (ram,0x06387900) */
/* WARNING: Removing unreachable block (ram,0x0638791c) */
/* WARNING: Removing unreachable block (ram,0x06387938) */
/* WARNING: Removing unreachable block (ram,0x06387954) */
/* WARNING: Removing unreachable block (ram,0x0638795c) */
/* WARNING: Removing unreachable block (ram,0x06387984) */
/* WARNING: Removing unreachable block (ram,0x06387968) */
/* WARNING: Removing unreachable block (ram,0x06387974) */
/* WARNING: Removing unreachable block (ram,0x06387994) */
/* WARNING: Removing unreachable block (ram,0x063879a8) */
/* WARNING: Removing unreachable block (ram,0x063879d8) */
/* WARNING: Removing unreachable block (ram,0x063879e0) */
/* WARNING: Removing unreachable block (ram,0x06387a28) */
/* WARNING: Removing unreachable block (ram,0x06387a74) */
/* WARNING: Removing unreachable block (ram,0x06387aa4) */
/* WARNING: Removing unreachable block (ram,0x06387aac) */
/* WARNING: Removing unreachable block (ram,0x06387acc) */
/* WARNING: Removing unreachable block (ram,0x06387d00) */
/* WARNING: Removing unreachable block (ram,0x06387f28) */
/* WARNING: Removing unreachable block (ram,0x06387d10) */
/* WARNING: Removing unreachable block (ram,0x06387d64) */
/* WARNING: Removing unreachable block (ram,0x06387f2c) */
/* WARNING: Removing unreachable block (ram,0x06387d6c) */
/* WARNING: Removing unreachable block (ram,0x06387e0c) */
/* WARNING: Removing unreachable block (ram,0x06387e3c) */
/* WARNING: Removing unreachable block (ram,0x06387e54) */
/* WARNING: Removing unreachable block (ram,0x06387e8c) */
/* WARNING: Removing unreachable block (ram,0x06387e70) */
/* WARNING: Removing unreachable block (ram,0x06387d88) */
/* WARNING: Removing unreachable block (ram,0x06387f30) */
/* WARNING: Removing unreachable block (ram,0x06387dac) */
/* WARNING: Removing unreachable block (ram,0x06387f34) */
/* WARNING: Removing unreachable block (ram,0x06387f38) */
/* WARNING: Removing unreachable block (ram,0x06387f3c) */
/* WARNING: Removing unreachable block (ram,0x06387f40) */
/* WARNING: Removing unreachable block (ram,0x06387f70) */
/* WARNING: Removing unreachable block (ram,0x06387f80) */
/* WARNING: Removing unreachable block (ram,0x06387fa8) */
/* WARNING: Removing unreachable block (ram,0x06387fb0) */
/* WARNING: Removing unreachable block (ram,0x06387fbc) */
/* WARNING: Removing unreachable block (ram,0x06387fd4) */
/* WARNING: Removing unreachable block (ram,0x06387fdc) */
/* WARNING: Removing unreachable block (ram,0x06388028) */
/* WARNING: Removing unreachable block (ram,0x063880cc) */
/* WARNING: Removing unreachable block (ram,0x063880ec) */
/* WARNING: Removing unreachable block (ram,0x06388144) */
/* WARNING: Removing unreachable block (ram,0x06388228) */
/* WARNING: Removing unreachable block (ram,0x06388154) */
/* WARNING: Removing unreachable block (ram,0x06388164) */
/* WARNING: Removing unreachable block (ram,0x06388178) */
/* WARNING: Removing unreachable block (ram,0x06388180) */
/* WARNING: Removing unreachable block (ram,0x063881a8) */
/* WARNING: Removing unreachable block (ram,0x0638818c) */
/* WARNING: Removing unreachable block (ram,0x06388198) */
/* WARNING: Removing unreachable block (ram,0x063881b8) */
/* WARNING: Removing unreachable block (ram,0x063881d0) */
/* WARNING: Removing unreachable block (ram,0x063882e0) */
/* WARNING: Removing unreachable block (ram,0x063882e4) */
/* WARNING: Removing unreachable block (ram,0x063882e8) */
/* WARNING: Removing unreachable block (ram,0x063882ec) */
/* WARNING: Removing unreachable block (ram,0x06388304) */
/* WARNING: Removing unreachable block (ram,0x0638830c) */
/* WARNING: Removing unreachable block (ram,0x06388234) */
/* WARNING: Removing unreachable block (ram,0x06388238) */
/* WARNING: Removing unreachable block (ram,0x063882a8) */
/* WARNING: Removing unreachable block (ram,0x06388328) */
/* WARNING: Removing unreachable block (ram,0x06388330) */
/* WARNING: Removing unreachable block (ram,0x06388340) */
/* WARNING: Removing unreachable block (ram,0x06388350) */
/* WARNING: Removing unreachable block (ram,0x06388358) */
/* WARNING: Removing unreachable block (ram,0x06388390) */
/* WARNING: Removing unreachable block (ram,0x06388410) */
/* WARNING: Removing unreachable block (ram,0x06388420) */
/* WARNING: Removing unreachable block (ram,0x06388438) */
/* WARNING: Removing unreachable block (ram,0x06388458) */
/* WARNING: Removing unreachable block (ram,0x06388488) */
/* WARNING: Removing unreachable block (ram,0x06388498) */
/* WARNING: Removing unreachable block (ram,0x063884a0) */
/* WARNING: Removing unreachable block (ram,0x063884c8) */
/* WARNING: Removing unreachable block (ram,0x063884ac) */
/* WARNING: Removing unreachable block (ram,0x063884b8) */
/* WARNING: Removing unreachable block (ram,0x063884d4) */
/* WARNING: Removing unreachable block (ram,0x063885d8) */
/* WARNING: Removing unreachable block (ram,0x063884e4) */
/* WARNING: Removing unreachable block (ram,0x063884f4) */
/* WARNING: Removing unreachable block (ram,0x063884fc) */
/* WARNING: Removing unreachable block (ram,0x06388524) */
/* WARNING: Removing unreachable block (ram,0x06388508) */
/* WARNING: Removing unreachable block (ram,0x06388514) */
/* WARNING: Removing unreachable block (ram,0x06388530) */
/* WARNING: Removing unreachable block (ram,0x06388550) */
/* WARNING: Removing unreachable block (ram,0x0638856c) */
/* WARNING: Removing unreachable block (ram,0x06388598) */
/* WARNING: Removing unreachable block (ram,0x063885ac) */
/* WARNING: Removing unreachable block (ram,0x0638857c) */
/* WARNING: Removing unreachable block (ram,0x063885b0) */
/* WARNING: Removing unreachable block (ram,0x063886a0) */
/* WARNING: Removing unreachable block (ram,0x06388668) */
/* WARNING: Removing unreachable block (ram,0x063886c4) */
/* WARNING: Removing unreachable block (ram,0x063886dc) */
/* WARNING: Removing unreachable block (ram,0x063886ec) */
/* WARNING: Removing unreachable block (ram,0x063886f0) */
/* WARNING: Removing unreachable block (ram,0x06388700) */
/* WARNING: Removing unreachable block (ram,0x06388708) */
/* WARNING: Removing unreachable block (ram,0x06388730) */
/* WARNING: Removing unreachable block (ram,0x06388714) */
/* WARNING: Removing unreachable block (ram,0x06388720) */
/* WARNING: Removing unreachable block (ram,0x0638873c) */
/* WARNING: Removing unreachable block (ram,0x06388748) */
/* WARNING: Removing unreachable block (ram,0x0638874c) */
/* WARNING: Removing unreachable block (ram,0x06388754) */
/* WARNING: Removing unreachable block (ram,0x063886cc) */
/* WARNING: Removing unreachable block (ram,0x063885dc) */
/* WARNING: Removing unreachable block (ram,0x063885e0) */
/* WARNING: Removing unreachable block (ram,0x063885f0) */
/* WARNING: Removing unreachable block (ram,0x063885f8) */
/* WARNING: Removing unreachable block (ram,0x06388620) */
/* WARNING: Removing unreachable block (ram,0x06388604) */
/* WARNING: Removing unreachable block (ram,0x06388610) */
/* WARNING: Removing unreachable block (ram,0x0638862c) */
/* WARNING: Removing unreachable block (ram,0x06388638) */
/* WARNING: Removing unreachable block (ram,0x0638863c) */
/* WARNING: Removing unreachable block (ram,0x06388680) */
/* WARNING: Removing unreachable block (ram,0x06388688) */
/* WARNING: Removing unreachable block (ram,0x06388690) */
/* WARNING: Removing unreachable block (ram,0x06388694) */
/* WARNING: Removing unreachable block (ram,0x06388698) */
/* WARNING: Removing unreachable block (ram,0x06388584) */
/* WARNING: Removing unreachable block (ram,0x063881e8) */
/* WARNING: Removing unreachable block (ram,0x06388210) */
/* WARNING: Removing unreachable block (ram,0x063881f8) */
/* WARNING: Removing unreachable block (ram,0x06387dc4) */
/* WARNING: Removing unreachable block (ram,0x06387df0) */
/* WARNING: Removing unreachable block (ram,0x06387dd4) */
/* WARNING: Removing unreachable block (ram,0x06387cd0) */
/* WARNING: Removing unreachable block (ram,0x06387ea8) */
/* WARNING: Removing unreachable block (ram,0x06387ec0) */
/* WARNING: Removing unreachable block (ram,0x06387ce0) */

ulong MergeEngine_ECS_Systems_InventorySystem__TryMoveItemsFromInventoryToProducerInventory
                (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *unaff_x21;
  long *plVar10;
  undefined1 auVar11 [12];
  
  plVar9 = (long *)0x7e25000;
  if ((bRam0000000007e254eb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077c20b8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077e7300);
    bRam0000000007e254eb = 1;
  }
  plVar10 = (long *)PTR_DAT_0774e8c8;
  if (*(long *)(param_1 + 0xf0) == 0) {
    func_0x03280cac();
  }
  else {
    plVar9 = (long *)func_0x04545bc8(*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_077e7300);
    puVar2 = PTR_DAT_077c20b8;
    puVar1 = PTR_DAT_0774e8e0;
    unaff_x21 = plVar10;
    if (plVar9 != (long *)0x0) {
      do {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06387574;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar1,0);
LAB_06387574:
        uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          param_1 = 0;
          goto LAB_063875f0;
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_063875d0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
LAB_063875d0:
        uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        func_0x06388f84(param_1,uVar4);
      } while( true );
    }
  }
  func_0x03280cac();
  plVar10 = unaff_x21;
  while( true ) {
    auVar11 = func_0x03280ca4(param_1);
    if (auVar11._8_4_ != 1) break;
    plVar5 = (long *)func_0x072ce910();
    param_1 = *plVar5;
    uVar7 = func_0x072ce920();
LAB_063875f0:
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *plVar10) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06387640;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,*plVar10,0);
LAB_06387640:
      uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    }
    if (param_1 == 0) {
      return uVar7;
    }
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *plVar10) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_063876f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar9,*plVar10,0);
LAB_063876f8:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  func_0x03365958(auVar11._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  if ((bRam0000000007e254e4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077e7308);
    func_0x03280a18(PTR_DAT_077e7050);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_077e7310);
    func_0x03280a18(PTR_DAT_077e7318);
    func_0x03280a18(PTR_DAT_077e7320);
    func_0x03280a18(PTR_DAT_077e7328);
    func_0x03280a18(PTR_DAT_077e7330);
    func_0x03280a18(PTR_DAT_077e7030);
    func_0x03280a18(PTR_DAT_077e7338);
    func_0x03280a18(PTR_DAT_077e7340);
    func_0x03280a18(PTR_DAT_077e7348);
    func_0x03280a18(PTR_DAT_077503b8);
    func_0x03280a18(PTR_DAT_077e7350);
    bRam0000000007e254e4 = 1;
  }
  if (extraout_x1 == 0) {
    func_0x03280cac();
    puVar1 = PTR_DAT_077e7358;
    if ((bRam0000000007e254e5 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e7370);
      func_0x03280a18(PTR_DAT_077e7308);
      func_0x03280a18(PTR_DAT_077e7378);
      func_0x03280a18(PTR_DAT_077e7380);
      func_0x03280a18(PTR_DAT_077e7388);
      func_0x03280a18(PTR_DAT_077e7050);
      func_0x03280a18(PTR_DAT_077e7390);
      func_0x03280a18(PTR_DAT_077e7398);
      func_0x03280a18(PTR_DAT_077e73a0);
      func_0x03280a18(PTR_DAT_077e73a8);
      func_0x03280a18(PTR_DAT_077e7368);
      func_0x03280a18(PTR_DAT_077e7318);
      func_0x03280a18(PTR_DAT_077e7360);
      func_0x03280a18(PTR_DAT_077e73b0);
      func_0x03280a18(PTR_DAT_077e73b8);
      func_0x03280a18(PTR_DAT_077e73c0);
      func_0x03280a18(PTR_DAT_077e7358);
      func_0x03280a18(PTR_DAT_077e73c8);
      func_0x03280a18(PTR_DAT_077e73d0);
      bRam0000000007e254e5 = 1;
    }
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar1);
  }
  else {
    if (*(int *)(extraout_x1 + 0x18) + -1 < 0) {
      return extraout_x1;
    }
    uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7330);
  }
  return uVar7;
}

