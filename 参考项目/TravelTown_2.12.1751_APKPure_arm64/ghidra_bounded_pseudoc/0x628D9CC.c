/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628D9CC; bound 792 bytes; MergeEngine.ECS.Systems.PersistenceSystem.DeleteDataWithStorageKeyPrefix; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_PersistenceSystem__DeleteDataWithStorageKeyPrefix
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_0774ea58;
  if ((bRam0000000007e2551a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_07750ca0);
    func_0x03280a18(PTR_DAT_07750ca8);
    func_0x03280a18(PTR_DAT_07750cb0);
    func_0x03280a18(PTR_DAT_07757c48);
    func_0x03280a18(PTR_DAT_0776f1b0);
    func_0x03280a18(PTR_DAT_0777aca0);
    func_0x03280a18(PTR_DAT_07750cc0);
    bRam0000000007e2551a = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar12 = (undefined8 *)(param_1 + 0x88);
  uVar13 = *puVar12;
  *puVar12 = param_2;
  func_0x032809c4(puVar12,param_2);
  lVar6 = func_0x03d5ffd0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)puVar1);
  puVar5 = PTR_DAT_0777aca0;
  puVar4 = PTR_DAT_0776f1b0;
  puVar3 = PTR_DAT_07757c48;
  puVar2 = PTR_DAT_07750ca8;
  puVar1 = PTR_DAT_07750ca0;
  if (lVar6 == 0) {
LAB_0638dc58:
    auVar15 = func_0x03280cac();
    if (auVar15._8_4_ == 1) {
      plVar14 = (long *)func_0x072ce910(auVar15._0_8_);
      lVar6 = *plVar14;
      func_0x072ce920();
      func_0x051159b0(&uStack_80,*unaff_x24);
      if (lVar6 == 0) goto LAB_0638dc18;
      func_0x03280ca4(lVar6);
    }
    func_0x051159b0(&uStack_80,*unaff_x24);
    func_0x03365958(auVar15._0_8_);
    func_0x03280ca4(0);
    auVar16._0_8_ = func_0x02f09514();
    puVar2 = PTR_DAT_07752c90;
    puVar1 = PTR_DAT_07752c88;
    if ((bRam0000000007e2551b & 1) == 0) {
      func_0x03280a18(PTR_DAT_07752c88);
      func_0x03280a18(PTR_DAT_07752c90);
      bRam0000000007e2551b = 1;
    }
    uVar13 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x053bfe40(uVar13,*(undefined8 *)puVar1);
    *(undefined8 *)(auVar16._0_8_ + 0x78) = uVar13;
    func_0x032809c4((undefined8 *)(auVar16._0_8_ + 0x78),uVar13);
    uVar13 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x053bfe40(uVar13,*(undefined8 *)puVar1);
    *(undefined8 *)(auVar16._0_8_ + 0x80) = uVar13;
    func_0x032809c4((undefined8 *)(auVar16._0_8_ + 0x80),uVar13);
    auVar16._8_8_ = 0;
    return auVar16;
  }
  func_0x04145068(&uStack_98,lVar6,*(undefined8 *)PTR_DAT_07750cc0);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_70 = uStack_88;
  while (uVar7 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
    uVar8 = func_0x0638c810(param_1,uStack_70);
    plVar14 = *(long **)(param_1 + 0x40);
    if (plVar14 == (long *)0x0) {
      func_0x03280cac();
LAB_0638dc4c:
      func_0x03280cac();
LAB_0638dc50:
      func_0x03280cac();
      goto LAB_0638dc54;
    }
    lVar10 = *plVar14;
    lVar6 = *(long *)puVar5;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_0638db60;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar14,lVar6,6);
LAB_0638db60:
    uVar7 = (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    if ((uVar7 & 1) != 0) {
      plVar14 = *(long **)(param_1 + 0x40);
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        lVar6 = *(long *)puVar5;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_0638dbcc;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar14,lVar6,8);
LAB_0638dbcc:
        (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
        goto LAB_0638dbdc;
      }
      goto LAB_0638dc50;
    }
LAB_0638dbdc:
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_0638dc4c;
    uVar7 = func_0x053c0534(*(long *)(param_1 + 0x78),uVar8,*(undefined8 *)puVar3);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
LAB_0638dc54:
        func_0x03280cac();
        unaff_x24 = (undefined8 *)puVar1;
        goto LAB_0638dc58;
      }
      func_0x053c0700(*(long *)(param_1 + 0x78),uVar8,*(undefined8 *)puVar4);
    }
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)puVar1);
LAB_0638dc18:
  *puVar12 = uVar13;
  auVar16 = func_0x032809c4(puVar12,uVar13);
  return auVar16;
}

