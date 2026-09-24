/* Ghidra 12.1.2 native pseudocode; RVA 0x6787A7C; MergeEngine.ECS.Systems.Board.UnboxingSystem.ItemMerged; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Board_UnboxingSystem__ItemMerged
          (long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  undefined1 auVar18 [12];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000007e28d22 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_078101a0);
    func_0x03280a18(PTR_DAT_078101a8);
    func_0x03280a18(PTR_DAT_078101b0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_078101b8);
    func_0x03280a18(PTR_DAT_078101c0);
    func_0x03280a18(PTR_DAT_078101c8);
    func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e28d22 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar5 = func_0x06a02524(*(long *)(param_1 + 0x50),param_3,0,0), puVar2 = PTR_DAT_078101a8,
     lVar5 == 0)) {
LAB_06887e0c:
    auVar18 = func_0x03280cac();
    if (auVar18._8_4_ == 1) {
      plVar13 = (long *)func_0x072ce910(auVar18._0_8_);
      lVar5 = *plVar13;
      func_0x072ce920();
      auVar16 = func_0x05108f58(&uStack_b0,*(undefined8 *)PTR_DAT_078101a0);
      if (lVar5 == 0) {
        return auVar16;
      }
      func_0x03280ca4(lVar5);
    }
    func_0x05108f58(&uStack_b0,*(undefined8 *)PTR_DAT_078101a0);
    func_0x03365958(auVar18._0_8_);
    func_0x03280ca4(0);
    uVar10 = func_0x02f09514();
    uStack_e8 = 0;
    func_0x05c6e674((float)(int)uVar10,(float)(int)((ulong)uVar10 >> 0x20),&uStack_e8,0);
    return ZEXT416((uint)uStack_e8);
  }
  func_0x040cf800(&uStack_c8,lVar5,*(undefined8 *)PTR_DAT_078101b8);
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_a0 = uStack_b8;
LAB_06887b90:
  uVar6 = func_0x05108f5c(&uStack_b0,*(undefined8 *)puVar2);
  uVar10 = uStack_a0;
  if ((uVar6 & 1) == 0) {
    auVar16 = func_0x05108f58(&uStack_b0,*(undefined8 *)PTR_DAT_078101a0);
    return auVar16;
  }
  if (*(long *)(param_1 + 0x50) != 0) goto code_r0x06887ba8;
  func_0x03280cac();
  goto LAB_06887df4;
code_r0x06887ba8:
  lVar5 = func_0x06a02444(*(long *)(param_1 + 0x50),uStack_a0,0);
  if (lVar5 == 0) goto LAB_06887b90;
  lVar5 = func_0x03ced81c(lVar5,*(undefined8 *)PTR_DAT_0777e638);
  if (lVar5 == 0) {
LAB_06887df4:
    func_0x03280cac();
LAB_06887df8:
    func_0x03280cac();
LAB_06887dfc:
    func_0x03280cac();
LAB_06887e00:
    func_0x03280cac();
  }
  else {
    if ((*(uint *)(lVar5 + 0x34) | 2) != 2) goto LAB_06887b90;
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_06887df8;
    lVar7 = func_0x06603648(*(long *)(param_1 + 0x78),0);
    if ((lVar7 == 0) || (*(char *)(lVar5 + 0x33) == '\0')) {
LAB_06887da0:
      func_0x06887ef4(param_1,lVar5);
      goto LAB_06887b90;
    }
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_06887e00;
    lVar7 = *(long *)(param_1 + 0x28);
    uVar8 = func_0x06603648(*(long *)(param_1 + 0x78),0);
    uStack_c8 = 0;
    func_0x05c6e674((float)(int)uVar10,(float)(int)((ulong)uVar10 >> 0x20),&uStack_c8,0);
    if (param_4 == (long *)0x0) goto LAB_06887e08;
    lVar14 = *param_4;
    uVar17 = uStack_c8 & 0xffffffff;
    uVar3 = uStack_c8._4_4_;
    uVar1 = *(undefined4 *)(lVar5 + 0x44);
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar6 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779820) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06887c94;
        }
        uVar6 = uVar6 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_07779820,0);
LAB_06887c94:
    uVar10 = (*(code *)*puVar9)(param_4,puVar9[1]);
    if (param_5 != (long *)0x0) {
      lVar14 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar6 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07779820) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06887cfc;
          }
          uVar6 = uVar6 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(param_5,*(long *)PTR_DAT_07779820,0);
LAB_06887cfc:
      uVar11 = (*(code *)*puVar9)(param_5,puVar9[1]);
      uStack_c8 = 0;
      func_0x05c6e674((float)(int)param_3,(float)(int)((ulong)param_3 >> 0x20),&uStack_c8,0);
      uVar6 = uStack_c8 & 0xffffffff;
      uVar4 = uStack_c8._4_4_;
      uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078101c0);
      uStack_d0 = 0;
      uStack_d8 = 5;
      uStack_e0 = uVar11;
      func_0x06481578(uVar17,uVar3,uVar6,uVar4,uVar12,uVar8,*(undefined8 *)PTR_DAT_078101d0,uVar1,0,
                      0,0,uVar10);
      if (lVar7 != 0) {
        func_0x03ea4d6c(lVar7,uVar12,*(undefined8 *)PTR_DAT_078101c8);
        goto LAB_06887da0;
      }
      goto LAB_06887dfc;
    }
  }
  func_0x03280cac();
LAB_06887e08:
  func_0x03280cac();
  goto LAB_06887e0c;
}

