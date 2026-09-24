
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fce79c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02fcec30 + 0x2fce7c0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fcec34 + 0x2fce7d4));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec38 + 0x2fce7e0));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec3c + 0x2fce7ec));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec40 + 0x2fce7f8));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec44 + 0x2fce804));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec48 + 0x2fce810));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec4c + 0x2fce81c));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec50 + 0x2fce828));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec54 + 0x2fce834));
    func_0x01438628(*(undefined4 *)(_UNK_02fcec58 + 0x2fce840));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x70f3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fcec5c + 0x2fce8b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02fc8d20();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02fcd424(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02fcec60 + 0x2fce914);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02fcec64 + 0x2fce928));
        if (*(int *)(**(int **)(_UNK_02fcec68 + 0x2fce940) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcec6c + 0x2fce960));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02fcec70 + 0x2fcea2c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02fc8d20();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02fcd838(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02fcec74 + 0x2fcea7c));
          iVar3 = FUN_02fc8d20();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_02fcd8a4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02fe71b0(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02fcec78 + 0x2fce9a8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcec7c + 0x2fce9c4));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x313,uVar2,**(undefined4 **)(_UNK_02fcec80 + 0x2fceb30),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02fcec84 + 0x2fceb68) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02fcec88 + 0x2fcebc4));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x7d;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x70f3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

