
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03274e20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032752b4 + 0x3274e44);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032752b8 + 0x3274e58));
    func_0x01438628(*(undefined4 *)(_UNK_032752bc + 0x3274e64));
    func_0x01438628(*(undefined4 *)(_UNK_032752c0 + 0x3274e70));
    func_0x01438628(*(undefined4 *)(_UNK_032752c4 + 0x3274e7c));
    func_0x01438628(*(undefined4 *)(_UNK_032752c8 + 0x3274e88));
    func_0x01438628(*(undefined4 *)(_UNK_032752cc + 0x3274e94));
    func_0x01438628(*(undefined4 *)(_UNK_032752d0 + 0x3274ea0));
    func_0x01438628(*(undefined4 *)(_UNK_032752d4 + 0x3274eac));
    func_0x01438628(*(undefined4 *)(_UNK_032752d8 + 0x3274eb8));
    func_0x01438628(*(undefined4 *)(_UNK_032752dc + 0x3274ec4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8146,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032752e0 + 0x3274f34) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03271308();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03274350(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_032752e4 + 0x3274f98);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_032752e8 + 0x3274fac));
        if (*(int *)(**(int **)(_UNK_032752ec + 0x3274fc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032752f0 + 0x3274fe4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_032752f4 + 0x32750b0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03271308();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_03274764(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_032752f8 + 0x3275100));
          iVar3 = FUN_03271308();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_032747d0();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0329d9cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_032752fc + 0x327502c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03275300 + 0x3275048));
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
        uVar2 = func_0x0515c4b0(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_03275304 + 0x32751b4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03275308 + 0x32751ec) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0327530c + 0x3275248));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
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
    iVar1 = func_0x029540a4(0x8146,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

