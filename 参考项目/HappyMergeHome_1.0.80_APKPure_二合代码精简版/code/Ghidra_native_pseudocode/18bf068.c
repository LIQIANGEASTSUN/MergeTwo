
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018cf068(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  pcVar5 = (char *)(_UNK_018cf144 + 0x18cf07c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cf148 + 0x18cf090));
    func_0x01438628(*(undefined4 *)(_UNK_018cf14c + 0x18cf09c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x954b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018cf150 + 0x18cf0f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cf154 + 0x18cf110));
    uVar7 = func_0x018cf158(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02aaad24 + 0x2aaa97c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02aaad28 + 0x2aaa990),uVar7,0);
      func_0x01438628(*(undefined4 *)(_UNK_02aaad2c + 0x2aaa99c));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad30 + 0x2aaa9a8));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad34 + 0x2aaa9b4));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad38 + 0x2aaa9c0));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad3c + 0x2aaa9cc));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad40 + 0x2aaa9d8));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad44 + 0x2aaa9e4));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad48 + 0x2aaa9f0));
      func_0x01438628(*(undefined4 *)(_UNK_02aaad4c + 0x2aaa9fc));
      *pcVar5 = '\x01';
    }
    uStack_1c = 0;
    uStack_20 = 0;
    iVar6 = func_0x02953fd4(0x1b1b,0);
    if (iVar6 == 0) {
      if (*(int *)(**(int **)(_UNK_02aaad50 + 0x2aaaa64) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x03b2c734(**(undefined4 **)(_UNK_02aaad54 + 0x2aaaa80));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x029b49c8(iVar6,uVar7,0);
      if (iVar6 == 0) {
        uVar7 = **(undefined4 **)(_UNK_02aaad58 + 0x2aaac24);
      }
      else {
        iVar2 = func_0x01fe63ec(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x28);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02667d88(iVar2,0);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar2 != 0) {
          iVar1 = func_0x02ab58f8(iVar1,*(undefined4 *)(iVar6 + 8));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar1 + 0xc);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x014e9568(**(undefined4 **)(_UNK_02aaad5c + 0x2aaac64),
                                  *(undefined4 *)(iVar6 + 8),0);
          iVar2 = **(int **)(_UNK_02aaad60 + 0x2aaac7c);
          iVar6 = *(int *)(iVar2 + 0x1c);
          if (iVar6 == 0) {
            func_0x014909d8(iVar2);
            iVar6 = *(int *)(iVar2 + 0x1c);
          }
          iVar6 = *(int *)(iVar6 + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x0149097c();
          }
          uVar4 = **(undefined4 **)(iVar6 + 0x5c);
          if (*(int *)(**(int **)(_UNK_02aaad64 + 0x2aaacdc) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_02aaad64 + 0x2aaacdc));
          }
          func_0x026794a8(uVar7,uVar4,0);
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar1 + 8);
        }
        else {
          uVar4 = **(undefined4 **)(_UNK_02aaad68 + 0x2aaab04);
          uStack_24 = 0;
          uStack_28 = 0;
          func_0x0396e17c(&uStack_28,*(undefined4 *)(iVar6 + 0x14),
                          **(undefined4 **)(_UNK_02aaad6c + 0x2aaab10));
          uStack_20 = uStack_28;
          uStack_1c = uStack_24;
          uVar7 = func_0x0396e27c(&uStack_20,**(undefined4 **)(_UNK_02aaad70 + 0x2aaab34));
          uVar7 = func_0x014e9568(uVar4,uVar7,0);
          iVar2 = **(int **)(_UNK_02aaad74 + 0x2aaab64);
          iVar1 = *(int *)(iVar2 + 0x1c);
          if (iVar1 == 0) {
            func_0x014909d8(iVar2);
            iVar1 = *(int *)(iVar2 + 0x1c);
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          uVar4 = **(undefined4 **)(iVar1 + 0x5c);
          if (*(int *)(**(int **)(_UNK_02aaad78 + 0x2aaabc4) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_02aaad78 + 0x2aaabc4));
          }
          func_0x026794a8(uVar7,uVar4,0);
          uVar7 = func_0x0152542c((undefined4 *)(iVar6 + 0x14),0);
          uVar7 = func_0x014e9568(**(undefined4 **)(_UNK_02aaad7c + 0x2aaac10),uVar7,0);
        }
      }
    }
    else {
      iVar6 = func_0x029540a4(0x1b1b,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x02870e9c(iVar6,iVar1,uVar7,0);
    }
    return uVar7;
  }
  iVar1 = func_0x029540a4(0x954b,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02869558 + 0x2869478);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
  uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
  return uVar7;
}

