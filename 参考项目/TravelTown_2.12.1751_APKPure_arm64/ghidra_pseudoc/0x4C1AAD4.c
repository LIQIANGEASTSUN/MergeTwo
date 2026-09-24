/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1AAD4; MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>.ConvertToQueuedItem; status ok */

/* WARNING: Possible PIC construction at 0x04d1ac04: Changing call to branch */
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

undefined8
MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___ConvertToQueuedItem
          (long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 uStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
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
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (param_2 == 0) {
    func_0x03280cac();
    func_0x03280cac();
    func_0x03280cac();
    auVar15 = func_0x03280cac();
    if (auVar15._8_4_ == 1) {
      plVar7 = (long *)func_0x072ce910(auVar15._0_8_);
      lVar11 = *plVar7;
      func_0x072ce920();
      func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07780520);
      if (lVar11 == 0) {
        return 0x7e1a000;
      }
      func_0x03280ca4(lVar11);
    }
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07780520);
    func_0x03365958(auVar15._0_8_);
    func_0x03280ca4(0);
    auVar14 = func_0x02f09514();
    lVar11 = auVar14._8_8_;
    param_1 = auVar14._0_8_;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    uVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780558);
    func_0x04143ca8(uVar5,uVar1,*(undefined8 *)puVar4);
    func_0x04145068(&uStack_98,param_2,*(undefined8 *)puVar3);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    do {
      uVar6 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar2);
      if ((uVar6 & 1) == 0) {
        func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_07780520);
        return uVar5;
      }
    } while (lStack_70 == 0);
    lVar11 = *(long *)(lStack_70 + 0x18);
    param_3 = *(long *)(lStack_70 + 0x20);
  }
  if ((bRam0000000007e1af1a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e1af1a = 1;
  }
  puVar2 = PTR_DAT_0777e5d0;
  if (param_3 == 0) {
LAB_04d1ae98:
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x06a05088(0);
    uStack_e8 = 0;
    func_0x0437ba9c(&uStack_e8,0x20,*(undefined8 *)puVar2);
    uVar5 = func_0x06a13bc8(uVar5,uStack_e8,0,0,0);
    if ((param_1 == 0) || (plVar7 = *(long **)(param_1 + 0x18), plVar7 == (long *)0x0))
    goto LAB_04d1af94;
    lVar12 = *(long *)PTR_DAT_0777e5b8;
    if (lVar11 == 0) {
      lVar8 = 0;
    }
    else {
      uVar13 = *(undefined8 *)PTR_DAT_0777e548;
      lVar8 = func_0x03280b90(lVar11,uVar13);
      if (lVar8 == 0) {
        func_0x03281048(lVar11,uVar13);
        goto LAB_04d1ae98;
      }
    }
    lVar11 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04d1aef0;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar7,lVar12,0);
LAB_04d1aef0:
    uVar5 = (*(code *)*puVar9)(plVar7,lVar8,uVar5,puVar9[1]);
    plVar7 = *(long **)(param_1 + 0x58);
    if (plVar7 == (long *)0x0) {
LAB_04d1af94:
      lVar11 = func_0x03280cac();
      if ((bRam0000000007e1af1b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a608);
        bRam0000000007e1af1b = 1;
      }
      if (*(long *)(lVar11 + 0x50) != 0) {
        lVar12 = func_0x064819c0(*(long *)(lVar11 + 0x50),0);
        lVar11 = 0;
        if (lVar12 != 0) {
          lVar11 = 0;
          if (*(long *)(lVar12 + 0x20) != 0) {
            lVar11 = func_0x06472e74(*(long *)(lVar12 + 0x20),0);
          }
        }
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
          return 0;
        }
        return 1;
      }
      uVar5 = func_0x03280cac();
      return uVar5;
    }
    lVar11 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04d1af64;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077803d0,0);
LAB_04d1af64:
    (*(code *)*puVar9)(plVar7,uVar5,param_3,puVar9[1]);
  }
  return uVar5;
}

