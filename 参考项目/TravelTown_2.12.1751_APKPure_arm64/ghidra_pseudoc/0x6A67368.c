/* Ghidra 12.1.2 native pseudocode; RVA 0x6A67368; Merger.MergeBoard.Systems.FeedingCombinationConsumeSystem.Tick; status ok */


void Merger_MergeBoard_Systems_FeedingCombinationConsumeSystem__Tick
               (undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [12];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  plVar14 = (long *)PTR_DAT_07830c30;
  puVar5 = PTR_DAT_07830c28;
  puVar4 = PTR_DAT_07830c20;
  puVar3 = PTR_DAT_0782fe68;
  puVar2 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a6a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830c20);
    func_0x03280a18(PTR_DAT_0777a4f8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830c38);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830c40);
    func_0x03280a18(PTR_DAT_07830c48);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07830c50);
    func_0x03280a18(PTR_DAT_07830c58);
    func_0x03280a18(PTR_DAT_07830c60);
    func_0x03280a18(PTR_DAT_07830c28);
    func_0x03280a18(PTR_DAT_07830c68);
    func_0x03280a18(PTR_DAT_07830c70);
    func_0x03280a18(PTR_DAT_07830c30);
    bRam0000000007e2a6a9 = 1;
  }
  lStack_48 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uVar6 = func_0x03d1a0b4(*(undefined8 *)puVar4);
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(lVar7,0,*(undefined8 *)puVar2,0);
  lStack_108 = lStack_c8;
  uStack_110 = uStack_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  func_0x03e651e4(&uStack_b0,&uStack_110,uVar6,lVar7,*(undefined8 *)puVar5);
  lVar8 = *plVar14;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar8 = *plVar14;
  }
  puVar3 = PTR_DAT_07830c60;
  puVar2 = PTR_DAT_07830c58;
  plVar13 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
  if (plVar13 == (long *)0x0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar8 = *plVar14;
    }
    lVar7 = **(long **)(lVar8 + 0xb8);
    plVar13 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07830c38);
    func_0x05350158(plVar13,lVar7,*(undefined8 *)PTR_DAT_07830c70,0);
    plVar9 = (long *)(*(long *)(*plVar14 + 0xb8) + 8);
    *plVar9 = (long)plVar13;
    func_0x032809c4(plVar9,plVar13);
  }
  func_0x0448a6a0(&uStack_110,&uStack_90,plVar13,*(undefined8 *)puVar3);
  lStack_68 = lStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  plVar9 = (long *)func_0x0448a6f8(&uStack_70,*(undefined8 *)puVar2);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07830c40) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b675f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07830c40,0);
LAB_06b675f8:
    plVar14 = (long *)PTR_DAT_0774e8c8;
    plVar13 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar5 = PTR_DAT_07830c68;
    puVar4 = PTR_DAT_07830c48;
    puVar3 = PTR_DAT_0777a4f8;
    puVar2 = PTR_DAT_0774e8e0;
    if (plVar13 == (long *)0x0) goto LAB_06b677d0;
LAB_06b67634:
    do {
      lVar7 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b67680;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,0);
LAB_06b67680:
      uVar11 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      if ((uVar11 & 1) == 0) {
        lVar7 = 0;
        goto LAB_06b6774c;
      }
      lVar7 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b676dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar4,0);
LAB_06b676dc:
      (*(code *)*puVar10)(&uStack_110,plVar13,puVar10[1]);
      lVar7 = lStack_108;
    } while ((lStack_108 == 0) ||
            (uVar11 = func_0x03d1ecb4(lStack_108,&lStack_48,*(undefined8 *)puVar3),
            (uVar11 & 1) == 0));
    if (lStack_48 != 0) {
      iVar1 = *(int *)(lStack_48 + 0x18);
      *(undefined4 *)(lStack_48 + 0x18) = 0;
      *(int *)(lStack_48 + 0x1c) = *(int *)(lStack_48 + 0x1c) + 1;
      if (0 < iVar1) {
        func_0x057b9c7c(*(undefined8 *)(lStack_48 + 0x10),0,iVar1,0);
      }
      func_0x03ec89f0(lStack_48,lVar7,*(undefined8 *)puVar5);
      goto LAB_06b67634;
    }
    func_0x03280cac();
  }
  func_0x03280cac();
LAB_06b677d0:
  func_0x03280cac();
  while( true ) {
    auVar15 = func_0x03280ca4(lVar7);
    if (auVar15._8_4_ != 1) break;
    plVar9 = (long *)func_0x072ce910();
    lVar7 = *plVar9;
    func_0x072ce920();
LAB_06b6774c:
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar14) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b6779c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar13,*plVar14,0);
LAB_06b6779c:
      (*(code *)*puVar10)(plVar13,puVar10[1]);
    }
    if (lVar7 == 0) {
      return;
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar14) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b6786c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar13,*plVar14,0);
LAB_06b6786c:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  func_0x03365958(auVar15._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}

