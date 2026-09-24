
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0308270c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_03082af0 + 0x3082724);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03082af4 + 0x3082738));
    func_0x01438628(*(undefined4 *)(_UNK_03082af8 + 0x3082744));
    func_0x01438628(*(undefined4 *)(_UNK_03082afc + 0x3082750));
    func_0x01438628(*(undefined4 *)(_UNK_03082b00 + 0x308275c));
    func_0x01438628(*(undefined4 *)(_UNK_03082b04 + 0x3082768));
    func_0x01438628(*(undefined4 *)(_UNK_03082b08 + 0x3082774));
    func_0x01438628(*(undefined4 *)(_UNK_03082b0c + 0x3082780));
    func_0x01438628(*(undefined4 *)(_UNK_03082b10 + 0x308278c));
    func_0x01438628(*(undefined4 *)(_UNK_03082b14 + 0x3082798));
    func_0x01438628(*(undefined4 *)(_UNK_03082b18 + 0x30827a4));
    func_0x01438628(*(undefined4 *)(_UNK_03082b1c + 0x30827b0));
    func_0x01438628(*(undefined4 *)(_UNK_03082b20 + 0x30827bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x75a0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x75a0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_03082b24 + 0x3082818) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03082b28 + 0x3082834));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03082b2c + 0x3082854));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 900);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03082b30 + 0x3082888));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03082b34 + 0x30828a0));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_03082b38 + 0x30828b8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_03082b3c + 0x30828e4);
    puVar8 = *(undefined4 **)(_UNK_03082b40 + 0x30828ec);
    do {
      if (*(int *)(**(int **)(_UNK_03082b44 + 0x30828f4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03082b48 + 0x3082910));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_03082b4c + 0x3082930));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 900);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x03b73d40(iVar5,uVar6,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04f6a364(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_03082b50 + 0x3082a08));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_03082b54 + 0x3082a40) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_03082b58 + 0x3082a5c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_03082b5c + 0x3082a7c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 900);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_03082b60 + 0x3082ad4));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

