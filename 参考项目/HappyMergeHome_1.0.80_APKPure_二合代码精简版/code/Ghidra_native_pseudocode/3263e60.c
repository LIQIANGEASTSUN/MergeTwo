
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03273e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032742f4 + 0x3273e84);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032742f8 + 0x3273e98));
    func_0x01438628(*(undefined4 *)(_UNK_032742fc + 0x3273ea4));
    func_0x01438628(*(undefined4 *)(_UNK_03274300 + 0x3273eb0));
    func_0x01438628(*(undefined4 *)(_UNK_03274304 + 0x3273ebc));
    func_0x01438628(*(undefined4 *)(_UNK_03274308 + 0x3273ec8));
    func_0x01438628(*(undefined4 *)(_UNK_0327430c + 0x3273ed4));
    func_0x01438628(*(undefined4 *)(_UNK_03274310 + 0x3273ee0));
    func_0x01438628(*(undefined4 *)(_UNK_03274314 + 0x3273eec));
    func_0x01438628(*(undefined4 *)(_UNK_03274318 + 0x3273ef8));
    func_0x01438628(*(undefined4 *)(_UNK_0327431c + 0x3273f04));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8118,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03274320 + 0x3273f74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03271308();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03274350(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_03274324 + 0x3273fd8);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03274328 + 0x3273fec));
        if (*(int *)(**(int **)(_UNK_0327432c + 0x3274004) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03274330 + 0x3274024));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_03274334 + 0x32740f0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03271308();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03274764(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03274338 + 0x3274140));
          iVar3 = FUN_03271308();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x032747d0();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0329d9cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0327433c + 0x327406c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03274340 + 0x3274088));
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
        func_0x020257a4(iVar3,0x2b8,uVar2,**(undefined4 **)(_UNK_03274344 + 0x32741f4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03274348 + 0x327422c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0327434c + 0x3274288));
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
    iVar1 = func_0x029540a4(0x8118,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

