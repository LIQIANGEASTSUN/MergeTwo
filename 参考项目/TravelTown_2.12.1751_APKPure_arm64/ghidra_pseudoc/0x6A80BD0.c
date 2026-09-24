/* Ghidra 12.1.2 native pseudocode; RVA 0x6A80BD0; Merger.MergeBoard.Logic.InteractionPostTickProcessor.Process; status ok */


void Merger_MergeBoard_Logic_InteractionPostTickProcessor__Process(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000007e2a760 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fb10);
    func_0x03280a18(PTR_DAT_0776e100);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831a60);
    func_0x03280a18(PTR_DAT_07831a80);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077e6e98);
    func_0x03280a18(PTR_DAT_077e6ea8);
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_07831aa0);
    func_0x03280a18(PTR_DAT_07831ae0);
    func_0x03280a18(PTR_DAT_0777e600);
    bRam0000000007e2a760 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((param_2 != (long *)0x0) &&
     (plVar7 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07831aa0),
     plVar7 != (long *)0x0)) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07831a60) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b80d18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07831a60,0);
LAB_06b80d18:
    param_2 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar6 = PTR_DAT_07831ae0;
    puVar5 = PTR_DAT_07831a80;
    puVar4 = PTR_DAT_0782fb10;
    puVar3 = PTR_DAT_0776e100;
    puVar2 = PTR_DAT_0774e8e0;
    puVar1 = PTR_DAT_0774e5d8;
    if (param_2 == (long *)0x0) goto LAB_06b80fb0;
LAB_06b80d5c:
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b80da8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b80da8:
    uVar11 = (*(code *)*puVar8)(param_2,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      param_1 = 0;
      goto LAB_06b80f14;
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b80e04;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar5,0);
LAB_06b80e04:
    lVar10 = (*(code *)*puVar8)(param_2,puVar8[1]);
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_06b80fa0;
      uVar11 = func_0x03d1f018(*(long *)(lVar10 + 0x10),&uStack_90,*(undefined8 *)puVar4);
      if ((((uVar11 & 1) != 0) && ((uStack_90 & 1) != 0)) && (uStack_90._4_4_ == 5)) {
        lVar10 = *(long *)(param_1 + 0x10);
        uVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e6e98);
        func_0x0686be80(uVar9,5,*(undefined8 *)PTR_DAT_0777e600,1,0);
        if (lVar10 == 0) goto LAB_06b80fa8;
        func_0x03ea4d6c(lVar10,uVar9,*(undefined8 *)PTR_DAT_077e6ea8);
        plVar7 = *(long **)(param_1 + 0x18);
        if (plVar7 == (long *)0x0) goto LAB_06b80fa4;
        lVar10 = *plVar7;
        uVar13 = *(undefined8 *)puVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        uVar9 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_06b80ef8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar3,2);
LAB_06b80ef8:
        (*(code *)*puVar8)(plVar7,uVar13,uVar9,puVar8[1]);
      }
      goto LAB_06b80d5c;
    }
    func_0x03280cac();
LAB_06b80fa0:
    func_0x03280cac();
LAB_06b80fa4:
    func_0x03280cac();
LAB_06b80fa8:
    func_0x03280cac();
  }
  func_0x03280cac();
LAB_06b80fb0:
  func_0x03280cac();
  while( true ) {
    auVar14 = func_0x03280ca4(param_1);
    if (auVar14._8_4_ != 1) break;
    plVar7 = (long *)func_0x072ce910();
    param_1 = *plVar7;
    func_0x072ce920();
LAB_06b80f14:
    if (param_2 != (long *)0x0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b80f6c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b80f6c:
      (*(code *)*puVar8)(param_2,puVar8[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b81060;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b81060:
    (*(code *)*puVar8)(param_2,puVar8[1]);
  }
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

