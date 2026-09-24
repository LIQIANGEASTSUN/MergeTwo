
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02becd90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bed20c + 0x2becda8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bed210 + 0x2becdbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bed214 + 0x2becdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bed218 + 0x2becdd4));
    func_0x01438628(*(undefined4 *)(_UNK_02bed21c + 0x2becde0));
    func_0x01438628(*(undefined4 *)(_UNK_02bed220 + 0x2becdec));
    func_0x01438628(*(undefined4 *)(_UNK_02bed224 + 0x2becdf8));
    func_0x01438628(*(undefined4 *)(_UNK_02bed228 + 0x2bece04));
    func_0x01438628(*(undefined4 *)(_UNK_02bed22c + 0x2bece10));
    func_0x01438628(*(undefined4 *)(_UNK_02bed230 + 0x2bece1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bed234 + 0x2bece28));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xec8,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 < 0x45) {
      if (iVar2 < 0x36) {
        if (iVar2 == 0x1b) {
          if (*(int *)(**(int **)(_UNK_02bed248 + 0x2bed010) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x03204330(0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x0321411c(iVar2,0);
        }
        else if (iVar2 == 0x2c) {
          if (*(int *)(**(int **)(_UNK_02bed24c + 0x2bed054) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x03271308(0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x0328063c(iVar2,0);
        }
        else {
          if (iVar2 != 0x31) {
            return 0;
          }
          if (*(int *)(**(int **)(_UNK_02bed238 + 0x2beceb0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x018bd08c(0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x018cdce0(iVar2,0);
        }
      }
      else if (iVar2 == 0x36) {
        if (*(int *)(**(int **)(_UNK_02bed250 + 0x2bed120) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x03105aec(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03116740(iVar2,0);
      }
      else if (iVar2 == 0x3b) {
        iVar2 = func_0x01b56e3c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x01b60cf8(iVar2,0);
      }
      else {
        if (iVar2 != 0x40) {
          return 0;
        }
        if (*(int *)(**(int **)(_UNK_02bed23c + 0x2becf70) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x02f8feac(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02fa0568(iVar2,0);
      }
    }
    else if (iVar2 < 0x54) {
      if (iVar2 == 0x45) {
        if (*(int *)(**(int **)(_UNK_02bed254 + 0x2bed098) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x030ccbc4(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x030dd280(iVar2,0);
      }
      else if (iVar2 == 0x4a) {
        if (*(int *)(**(int **)(_UNK_02bed258 + 0x2bed0dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x03003ba4(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0301425c(iVar2,0);
      }
      else {
        if (iVar2 != 0x4f) {
          return 0;
        }
        if (*(int *)(**(int **)(_UNK_02bed240 + 0x2becf14) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x01676670(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x01686d28(iVar2,0);
      }
    }
    else if (iVar2 == 0x54) {
      if (*(int *)(**(int **)(_UNK_02bed25c + 0x2bed18c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0170e674(0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x0171ed2c(iVar2,0);
    }
    else if (iVar2 == 0x59) {
      iVar2 = func_0x01ae4230(0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x01af1034(iVar2,0);
    }
    else {
      if (iVar2 != 0x5e) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_02bed244 + 0x2becfcc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x01920184(0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x0193083c(iVar2,0);
    }
    return (uint)(iVar2 * 6 + 0x2f < param_2);
  }
  iVar2 = func_0x029540a4(0xec8,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar1 = func_0x024f56e0(&uStack_38,0,0);
  return uVar1;
}

