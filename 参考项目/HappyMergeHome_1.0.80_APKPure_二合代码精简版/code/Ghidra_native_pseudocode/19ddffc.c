
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019edffc(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
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
  
  pcVar3 = (char *)(_UNK_019ee0a8 + 0x19ee00c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ee0ac + 0x19ee020));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x377c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x377c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar7,uVar6,&uStack_30,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_019ee0b0 + 0x19ee074) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar2 = (int *)FUN_019e7f30();
  if (piVar2 == (int *)0x0) {
    func_0x014388e4();
  }
  pcVar3 = (char *)(_UNK_029f262c + 0x29f2550);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f2630 + 0x29f2564),0);
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x237c,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_029f2634 + 0x29f25bc);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x029f0e84();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029f2638(iVar1,piVar2);
    if (iVar1 == 0) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x029f0e84();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar3 = (char *)(_UNK_029f2a14 + 0x29f272c);
      if (*pcVar3 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_029f2a18 + 0x29f2740));
        func_0x01438628(*(undefined4 *)(_UNK_029f2a1c + 0x29f274c));
        func_0x01438628(*(undefined4 *)(_UNK_029f2a20 + 0x29f2758));
        func_0x01438628(*(undefined4 *)(_UNK_029f2a24 + 0x29f2764));
        func_0x01438628(*(undefined4 *)(_UNK_029f2a28 + 0x29f2770));
        func_0x01438628(*(undefined4 *)(_UNK_029f2a2c + 0x29f277c));
        func_0x01438628(*(undefined4 *)(_UNK_029f2a30 + 0x29f2788));
        *pcVar3 = '\x01';
      }
      iVar7 = func_0x02953fd4(0x237e,0);
      if (iVar7 == 0) {
        iVar7 = *(int *)(iVar1 + 0x24);
        if (piVar2 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x04753c80(iVar7,uVar4,**(undefined4 **)(_UNK_029f2a34 + 0x29f281c));
        if (iVar7 == 0) {
          iVar1 = *(int *)(iVar1 + 0x24);
          uVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x04753a0c(iVar1,uVar4,piVar2,**(undefined4 **)(_UNK_029f2a48 + 0x29f2940));
          uVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
          iVar1 = func_0x014e9568(**(undefined4 **)(_UNK_029f2a4c + 0x29f2970),uVar4,0);
          iVar5 = **(int **)(_UNK_029f2a50 + 0x29f2984);
          iVar7 = *(int *)(iVar5 + 0x1c);
          if (iVar7 == 0) {
            func_0x014909d8(iVar5);
            iVar7 = *(int *)(iVar5 + 0x1c);
          }
          iVar7 = *(int *)(iVar7 + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          piVar2 = (int *)**(int **)(iVar7 + 0x5c);
          if (*(int *)(**(int **)(_UNK_029f2a54 + 0x29f29e4) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_029f2a54 + 0x29f29e4));
          }
          iVar7 = func_0x02953fd4(0x42,0,0);
          if (iVar7 == 0) {
            return;
          }
          iVar7 = func_0x029540a4(0x42,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
        }
        else {
          uVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
          iVar1 = func_0x024eee28(**(undefined4 **)(_UNK_029f2a38 + 0x29f2854),uVar4,
                                  **(undefined4 **)(_UNK_029f2a3c + 0x29f2860),0);
          iVar5 = **(int **)(_UNK_029f2a40 + 0x29f2874);
          iVar7 = *(int *)(iVar5 + 0x1c);
          if (iVar7 == 0) {
            func_0x014909d8(iVar5);
            iVar7 = *(int *)(iVar5 + 0x1c);
          }
          iVar7 = *(int *)(iVar7 + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x0149097c();
          }
          piVar2 = (int *)**(int **)(iVar7 + 0x5c);
          if (*(int *)(**(int **)(_UNK_029f2a44 + 0x29f28d4) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_029f2a44 + 0x29f28d4));
          }
          iVar7 = func_0x02953fd4(0x53,0,0);
          if (iVar7 == 0) {
            return;
          }
          iVar7 = func_0x029540a4(0x53,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
        }
      }
      else {
        iVar7 = func_0x029540a4(0x237e,0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x024f56c0(&uStack_50,0,piVar2,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar7 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar7 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,iVar1,0);
      func_0x01523a6c(&uStack_38,piVar2,0);
      iVar5 = *(int *)(iVar7 + 8);
      uVar4 = *(undefined4 *)(iVar7 + 0xc);
      iVar1 = *(int *)(iVar7 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar6 = 3;
      if (iVar1 == 0) {
        uVar6 = 2;
      }
      func_0x024f56d0(iVar5,uVar4,&uStack_38,uVar6,0,0);
      return;
    }
    return;
  }
  iVar1 = func_0x029540a4(0x237c,0);
  if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,piVar2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar6);
  return;
}

