
/* WARNING: Possible PIC construction at 0x02032284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02032328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0203232c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6da8c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
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
  undefined4 uStack_18;
  
  pcVar7 = (char *)(_UNK_02c6dd1c + 0x2c6daa4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6dd20 + 0x2c6dab8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6dd24 + 0x2c6dac4));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x5950,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x5950,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar4 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  func_0x02c6dd30(param_1,0);
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,0,0);
  uStack_18 = 0;
  func_0x02c6dff0(param_1,0,**(undefined4 **)(_UNK_02c6dd28 + 0x2c6dcdc),0);
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_02c6dd2c + 0x2c6dd0c);
  pcVar7 = (char *)(_UNK_0203241c + 0x2032150);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02032420 + 0x2032164),iVar6,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_02032424 + 0x2032170));
    func_0x01438628(*(undefined4 *)(_UNK_02032428 + 0x203217c));
    func_0x01438628(*(undefined4 *)(_UNK_0203242c + 0x2032188));
    func_0x01438628(*(undefined4 *)(_UNK_02032430 + 0x2032194));
    func_0x01438628(*(undefined4 *)(_UNK_02032434 + 0x20321a0));
    func_0x01438628(*(undefined4 *)(_UNK_02032438 + 0x20321ac));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x618,0);
  if (iVar3 == 0) {
    if (iVar6 != 0) {
      piVar10 = *(int **)(_UNK_0203243c + 0x203221c);
      piVar9 = (int *)(iVar4 + 0x24);
      iVar3 = *piVar9;
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x024eec50(iVar3,0,0);
      if (iVar3 == 0) {
        iVar3 = *piVar9;
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024ef144(iVar3,0,0);
        if (iVar3 == 0) {
          uVar8 = func_0x024eee28(**(undefined4 **)(_UNK_0203244c + 0x2032350),iVar6,
                                  **(undefined4 **)(_UNK_02032448 + 0x2032344),0);
          iVar3 = **(int **)(_UNK_02032450 + 0x2032364);
          iVar6 = *(int *)(iVar3 + 0x1c);
          if (iVar6 == 0) {
            func_0x014909d8(iVar3);
            iVar6 = *(int *)(iVar3 + 0x1c);
          }
          iVar6 = *(int *)(iVar6 + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          uVar5 = **(undefined4 **)(iVar6 + 0x5c);
          if (*(int *)(**(int **)(_UNK_02032454 + 0x20323c4) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_02032454 + 0x20323c4));
          }
          func_0x026795f8(uVar8,uVar5,0);
          piVar9 = (int *)(iVar4 + 0x10);
          *piVar9 = 0;
        }
        else {
          iVar3 = *piVar9;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f16cc(iVar3,iVar6,1,0);
          func_0x02032458(iVar4);
          if (*(int *)(**(int **)(_UNK_02032444 + 0x20322f0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x0202bb70();
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x0202dc88(iVar6);
          piVar9 = (int *)(iVar4 + 0x14);
          *piVar9 = iVar6;
        }
      }
      else {
        iVar4 = func_0x024eecb8(iVar4,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x035e8140(iVar4,**(undefined4 **)(_UNK_02032440 + 0x2032270));
        *piVar9 = iVar4;
      }
      if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
        puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar9 >> 0x11) * 4);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar9 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  else {
    iVar3 = func_0x029540a4(0x618,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x02869ba4(iVar3,iVar4,iVar6,1);
  }
  return;
}

