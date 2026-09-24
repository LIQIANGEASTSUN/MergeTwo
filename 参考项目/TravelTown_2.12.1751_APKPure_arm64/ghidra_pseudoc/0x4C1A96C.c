/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1A96C; MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>.LoadState; status ok */

/* WARNING: Possible PIC construction at 0x04d1a9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d1ac04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d1aa00) */
/* WARNING: Removing unreachable block (ram,0x04d1aa04) */
/* WARNING: Removing unreachable block (ram,0x04d1aa1c) */
/* WARNING: Removing unreachable block (ram,0x04d1aad0) */
/* WARNING: Removing unreachable block (ram,0x04d1aa24) */
/* WARNING: Removing unreachable block (ram,0x04d1aa40) */
/* WARNING: Removing unreachable block (ram,0x04d1aa48) */
/* WARNING: Removing unreachable block (ram,0x04d1aa84) */
/* WARNING: Removing unreachable block (ram,0x04d1aa54) */
/* WARNING: Removing unreachable block (ram,0x04d1aa60) */
/* WARNING: Removing unreachable block (ram,0x04d1aa94) */
/* WARNING: Removing unreachable block (ram,0x04d1aaa4) */
/* WARNING: Removing unreachable block (ram,0x03bf70e8) */
/* WARNING: Removing unreachable block (ram,0x03bf7104) */
/* WARNING: Removing unreachable block (ram,0x03bf710c) */
/* WARNING: Removing unreachable block (ram,0x03bf7110) */
/* WARNING: Removing unreachable block (ram,0x03bf7114) */
/* WARNING: Removing unreachable block (ram,0x03bf7124) */
/* WARNING: Removing unreachable block (ram,0x03bf7130) */
/* WARNING: Removing unreachable block (ram,0x03bf713c) */
/* WARNING: Removing unreachable block (ram,0x03bf7144) */
/* WARNING: Removing unreachable block (ram,0x03bf716c) */
/* WARNING: Removing unreachable block (ram,0x03bf7150) */
/* WARNING: Removing unreachable block (ram,0x03bf715c) */
/* WARNING: Removing unreachable block (ram,0x03bf7178) */
/* WARNING: Removing unreachable block (ram,0x03bf7188) */
/* WARNING: Removing unreachable block (ram,0x04d1ac08) */
/* WARNING: Removing unreachable block (ram,0x04d1ac1c) */
/* WARNING: Removing unreachable block (ram,0x04d1ac30) */
/* WARNING: Removing unreachable block (ram,0x04d1ac24) */
/* WARNING: Removing unreachable block (ram,0x04d1ac28) */
/* WARNING: Removing unreachable block (ram,0x04d1ac34) */
/* WARNING: Removing unreachable block (ram,0x04d1ac70) */
/* WARNING: Removing unreachable block (ram,0x04d1ac90) */
/* WARNING: Removing unreachable block (ram,0x04d1acbc) */
/* WARNING: Removing unreachable block (ram,0x04d1aca0) */

long * MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___LoadState
                 (long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_128;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  plVar5 = param_1;
  if ((bRam0000000007e1af18 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780518);
    plVar5 = (long *)func_0x03280a18(PTR_DAT_07780510);
    bRam0000000007e1af18 = 1;
  }
  if ((param_2 == 0) ||
     (plVar5 = (long *)(**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220)),
     ((ulong)plVar5 & 1) == 0)) {
    return plVar5;
  }
  func_0x03eb68fc(param_1,*(undefined8 *)PTR_DAT_07780510);
  lVar10 = *(long *)(param_2 + 0x18);
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
  if ((bRam0000000007e1af19 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780520);
    func_0x03280a18(PTR_DAT_07780528);
    func_0x03280a18(PTR_DAT_07780530);
    func_0x03280a18(PTR_DAT_07780538);
    func_0x03280a18(PTR_DAT_07780540);
    func_0x03280a18(PTR_DAT_07780548);
    func_0x03280a18(PTR_DAT_07780550);
    func_0x03280a18(PTR_DAT_07780558);
    func_0x03280a18(PTR_DAT_07780560);
    bRam0000000007e1af19 = 1;
  }
  puVar4 = PTR_DAT_07780548;
  puVar3 = PTR_DAT_07780540;
  puVar2 = PTR_DAT_07780528;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  if (lVar10 == 0) {
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    auVar17 = func_0x03280cac();
    if (auVar17._8_4_ == 1) {
      plVar5 = (long *)func_0x072ce910(auVar17._0_8_);
      lVar10 = *plVar5;
      func_0x072ce920();
      func_0x051159b0(&uStack_c0,*(undefined8 *)PTR_DAT_07780520);
      if (lVar10 == 0) {
        return (long *)0x7e1a000;
      }
      func_0x03280ca4(lVar10);
    }
    func_0x051159b0(&uStack_c0,*(undefined8 *)PTR_DAT_07780520);
    func_0x03365958(auVar17._0_8_);
    func_0x03280ca4(0);
    auVar16 = func_0x02f09514();
    lVar10 = auVar16._8_8_;
    param_1 = auVar16._0_8_;
  }
  else {
    uVar1 = *(undefined4 *)(lVar10 + 0x18);
    plVar5 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07780558);
    func_0x04143ca8(plVar5,uVar1,*(undefined8 *)puVar4);
    func_0x04145068(&uStack_d8,lVar10,*(undefined8 *)puVar3);
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    lStack_b0 = lStack_c8;
    do {
      uVar6 = func_0x051159b4(&uStack_c0,*(undefined8 *)puVar2);
      if ((uVar6 & 1) == 0) {
        func_0x051159b0(&uStack_c0,*(undefined8 *)PTR_DAT_07780520);
        return plVar5;
      }
    } while (lStack_b0 == 0);
    lVar10 = *(long *)(lStack_b0 + 0x18);
    lVar11 = *(long *)(lStack_b0 + 0x20);
  }
  if ((bRam0000000007e1af1a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e1af1a = 1;
  }
  puVar2 = PTR_DAT_0777e5d0;
  if (lVar11 == 0) {
LAB_04d1ae98:
    plVar5 = (long *)0x0;
  }
  else {
    uVar7 = func_0x06a05088(0);
    uStack_128 = 0;
    func_0x0437ba9c(&uStack_128,0x20,*(undefined8 *)puVar2);
    uVar7 = func_0x06a13bc8(uVar7,uStack_128,0,0,0);
    if ((param_1 == (long *)0x0) || (plVar5 = (long *)param_1[3], plVar5 == (long *)0x0))
    goto LAB_04d1af94;
    lVar14 = *(long *)PTR_DAT_0777e5b8;
    if (lVar10 == 0) {
      lVar8 = 0;
    }
    else {
      uVar15 = *(undefined8 *)PTR_DAT_0777e548;
      lVar8 = func_0x03280b90(lVar10,uVar15);
      if (lVar8 == 0) {
        func_0x03281048(lVar10,uVar15);
        goto LAB_04d1ae98;
      }
    }
    lVar10 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04d1aef0;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar5,lVar14,0);
LAB_04d1aef0:
    plVar5 = (long *)(*(code *)*puVar9)(plVar5,lVar8,uVar7,puVar9[1]);
    plVar13 = (long *)param_1[0xb];
    if (plVar13 == (long *)0x0) {
LAB_04d1af94:
      lVar11 = func_0x03280cac();
      if ((bRam0000000007e1af1b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a608);
        bRam0000000007e1af1b = 1;
      }
      if (*(long *)(lVar11 + 0x50) == 0) {
        plVar5 = (long *)func_0x03280cac();
        return plVar5;
      }
      lVar10 = func_0x064819c0(*(long *)(lVar11 + 0x50),0);
      lVar11 = 0;
      if (lVar10 != 0) {
        lVar11 = 0;
        if (*(long *)(lVar10 + 0x20) != 0) {
          lVar11 = func_0x06472e74(*(long *)(lVar10 + 0x20),0);
        }
      }
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
        return (long *)0x0;
      }
      return (long *)0x1;
    }
    lVar10 = *plVar13;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04d1af64;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077803d0,0);
LAB_04d1af64:
    (*(code *)*puVar9)(plVar13,plVar5,lVar11,puVar9[1]);
  }
  return plVar5;
}

