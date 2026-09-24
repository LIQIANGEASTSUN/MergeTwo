/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrderBoxMiniEntry$$OnEnable RVA 0x1f66338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76338(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01f76560 + 0x1f7634c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f76564 + 0x1f76360));
    func_0x01384978(*(undefined4 *)(_UNK_01f76568 + 0x1f7636c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7656c + 0x1f76378));
    func_0x01384978(*(undefined4 *)(_UNK_01f76570 + 0x1f76384));
    func_0x01384978(*(undefined4 *)(_UNK_01f76574 + 0x1f76390));
    func_0x01384978(*(undefined4 *)(_UNK_01f76578 + 0x1f7639c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7657c + 0x1f763a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f76580 + 0x1f763b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f76584 + 0x1f763c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f76588 + 0x1f763cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa777,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f7658c + 0x1f76424) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f76590 + 0x1f76440));
    puVar8 = *(undefined4 **)(_UNK_01f76594 + 0x1f76454);
    uVar7 = func_0x01384be4(*puVar8);
    func_0x024500b4(uVar7,param_1,**(undefined4 **)(_UNK_01f76598 + 0x1f76470),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028be400(iVar1,uVar7,0);
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f7659c + 0x1f764a0));
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01f765a0 + 0x1f764b4));
    func_0x03ccb96c(uVar7,param_1,**(undefined4 **)(_UNK_01f765a4 + 0x1f764d0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e80c(iVar1,uVar7,**(undefined4 **)(_UNK_01f765a8 + 0x1f764f4));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f765ac + 0x1f76508));
    uVar7 = func_0x01384be4(*puVar8);
    func_0x024500b4(uVar7,param_1,**(undefined4 **)(_UNK_01f765b0 + 0x1f76530),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028be400(iVar1,uVar7,0);
    pcVar5 = (char *)(_UNK_01f767c0 + 0x1f765cc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f767c4 + 0x1f765e0));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa778,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dbb000(iVar1,0);
      if (iVar1 != 0) {
        iVar6 = func_0x02141928(iVar1,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0214ef48(iVar6,0);
        if (iVar6 != 0) {
          iVar6 = func_0x02141928(iVar1,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0214efac(iVar6,0);
          iVar1 = func_0x02141928(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0214f000(iVar1,0);
          uVar2 = iVar6 - iVar1;
          if ((int)uVar2 < 1000) {
            iVar1 = func_0x0244fc34(param_1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x0244ffd4(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            (*(code *)&UNK_05189da8)(iVar1,0,0);
            return;
          }
          uStack_20 = 3;
          uStack_1c = 0;
          func_0x028bf020(*(undefined4 *)(param_1 + 0x10),
                          (int)((ulonglong)uVar2 * 0x10624dd3 >> 0x20),uVar2 / 1000,0);
          return;
        }
      }
      piVar4 = *(int **)(param_1 + 0x10);
      uVar7 = **(undefined4 **)(**(int **)(_UNK_01f767c8 + 0x1f76738) + 0x5c);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
                    /* WARNING: Could not recover jumptable at 0x01f7676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
      return;
    }
    iVar1 = func_0x0229f13c(0xa778,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa777,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MBBoardOrderBoxMiniEntry$$RefreshCD RVA 0x1f665b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f765b4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01f767c0 + 0x1f765cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f767c4 + 0x1f765e0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa778,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa778,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dbb000(iVar1,0);
  if (iVar1 != 0) {
    iVar6 = func_0x02141928(iVar1,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x0214ef48(iVar6,0);
    if (iVar6 != 0) {
      iVar6 = func_0x02141928(iVar1,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0214efac(iVar6,0);
      iVar1 = func_0x02141928(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0214f000(iVar1,0);
      uVar2 = iVar6 - iVar1;
      if (999 < (int)uVar2) {
        uStack_20 = 3;
        uStack_1c = 0;
        func_0x028bf020(*(undefined4 *)(param_1 + 0x10),(int)((ulonglong)uVar2 * 0x10624dd3 >> 0x20)
                        ,uVar2 / 1000,0);
        return;
      }
      iVar1 = func_0x0244fc34(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar1,0,0);
      return;
    }
  }
  piVar4 = *(int **)(param_1 + 0x10);
  uVar7 = **(undefined4 **)(**(int **)(_UNK_01f767c8 + 0x1f76738) + 0x5c);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01f7676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
  return;
}



// ===== FAT.MBBoardOrderBoxMiniEntry$$OnDisable RVA 0x1f667cc =====

/* WARNING: Possible PIC construction at 0x01f76924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f76928) */
/* WARNING: Removing unreachable block (ram,0x01f76974) */
/* WARNING: Removing unreachable block (ram,0x01f76978) */
/* WARNING: Removing unreachable block (ram,0x01f769d4) */
/* WARNING: Removing unreachable block (ram,0x01f769d8) */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f767cc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01f769ec + 0x1f767e0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f769f0 + 0x1f767f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f769f4 + 0x1f76800));
    func_0x01384978(*(undefined4 *)(_UNK_01f769f8 + 0x1f7680c));
    func_0x01384978(*(undefined4 *)(_UNK_01f769fc + 0x1f76818));
    func_0x01384978(*(undefined4 *)(_UNK_01f76a00 + 0x1f76824));
    func_0x01384978(*(undefined4 *)(_UNK_01f76a04 + 0x1f76830));
    func_0x01384978(*(undefined4 *)(_UNK_01f76a08 + 0x1f7683c));
    func_0x01384978(*(undefined4 *)(_UNK_01f76a0c + 0x1f76848));
    func_0x01384978(*(undefined4 *)(_UNK_01f76a10 + 0x1f76854));
    func_0x01384978(*(undefined4 *)(_UNK_01f76a14 + 0x1f76860));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa77b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa77b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    puStack_2c = (undefined4 *)uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&iStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f76a18 + 0x1f768b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f76a1c + 0x1f768d4));
  puVar9 = *(undefined4 **)(_UNK_01f76a20 + 0x1f768e8);
  iVar7 = func_0x01384be4(*puVar9);
  func_0x024500b4(iVar7,param_1,**(undefined4 **)(_UNK_01f76a24 + 0x1f76904),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = 0x1f76928;
  puVar10 = &stack0xffffffd8;
  pcVar6 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar7,0);
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar7 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar7,0);
      if (piVar4 != (int *)0x0) {
        iVar7 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar7) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar7) {
            return;
          }
          puVar10 = &stack0xffffffe8;
        }
        else {
          uStack_1c = 0x28beb8c;
          param_1 = iVar2;
        }
        *(undefined4 *)(puVar10 + -4) = uStack_1c;
        *(int *)(puVar10 + -8) = param_1;
        func_0x0142996c(puVar10 + -0x14,*(undefined4 *)(*piVar4 + 0x20),iVar7);
        uVar1 = *(uint *)(puVar10 + -0xc);
        if ((puVar10[-0x14] & 1) == 0) {
          uVar1 = (uint)(puVar10 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((puVar10[-0x14] & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)(puVar10 + -0xc));
        }
        return;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  iStack_38 = param_1;
  iStack_34 = iVar2;
  iStack_30 = iVar7;
  puStack_2c = puVar9;
  func_0x0245494c(&uStack_68,0,iVar7,0);
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  iStack_48 = iStack_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_50,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_50,iVar2,0);
  func_0x01485278(&uStack_50,iVar7,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_50,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardOrderBoxMiniEntry$$_OnOrderBoxBegin RVA 0x1f66a40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76a40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xa779,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa779,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  pcVar5 = (char *)(_UNK_01f767c0 + 0x1f765cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f767c4 + 0x1f765e0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa778,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa778,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01dbb000(iVar2,0);
  if (iVar2 != 0) {
    iVar6 = func_0x02141928(iVar2,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x0214ef48(iVar6,0);
    if (iVar6 != 0) {
      iVar6 = func_0x02141928(iVar2,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0214efac(iVar6,0);
      iVar2 = func_0x02141928(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0214f000(iVar2,0);
      uVar1 = iVar6 - iVar2;
      if (999 < (int)uVar1) {
        uStack_20 = 3;
        uStack_1c = 0;
        func_0x028bf020(*(undefined4 *)(param_1 + 0x10),(int)((ulonglong)uVar1 * 0x10624dd3 >> 0x20)
                        ,uVar1 / 1000,0);
        return;
      }
      iVar2 = func_0x0244fc34(param_1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244ffd4(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar2,0,0);
      return;
    }
  }
  piVar4 = *(int **)(param_1 + 0x10);
  uVar7 = **(undefined4 **)(**(int **)(_UNK_01f767c8 + 0x1f76738) + 0x5c);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01f7676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
  return;
}



// ===== FAT.MBBoardOrderBoxMiniEntry$$_OnOrderBoxEnd RVA 0x1f66aa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76aa0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xa77a,0);
  if (iVar2 == 0) {
    pcVar5 = (char *)(_UNK_01f767c0 + 0x1f765cc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f767c4 + 0x1f765e0));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xa778,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dbb000(iVar2,0);
      if (iVar2 != 0) {
        iVar6 = func_0x02141928(iVar2,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0214ef48(iVar6,0);
        if (iVar6 != 0) {
          iVar6 = func_0x02141928(iVar2,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0214efac(iVar6,0);
          iVar2 = func_0x02141928(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0214f000(iVar2,0);
          uVar1 = iVar6 - iVar2;
          if ((int)uVar1 < 1000) {
            iVar2 = func_0x0244fc34(param_1,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0244ffd4(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            (*(code *)&UNK_05189da8)(iVar2,0,0);
            return;
          }
          uStack_20 = 3;
          uStack_1c = 0;
          func_0x028bf020(*(undefined4 *)(param_1 + 0x10),
                          (int)((ulonglong)uVar1 * 0x10624dd3 >> 0x20),uVar1 / 1000,0);
          return;
        }
      }
      piVar4 = *(int **)(param_1 + 0x10);
      uVar7 = **(undefined4 **)(**(int **)(_UNK_01f767c8 + 0x1f76738) + 0x5c);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
                    /* WARNING: Could not recover jumptable at 0x01f7676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
      return;
    }
    iVar2 = func_0x0229f13c(0xa778,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa77a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MBBoardOrderBoxMiniEntry$$.ctor RVA 0x1f66af8 =====

void FUN_01f76af8(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


