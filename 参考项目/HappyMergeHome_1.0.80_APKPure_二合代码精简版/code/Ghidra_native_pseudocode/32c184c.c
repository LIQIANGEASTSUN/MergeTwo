
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032d184c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032d1d00 + 0x32d1870);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d1d04 + 0x32d1884));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d08 + 0x32d1890));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d0c + 0x32d189c));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d10 + 0x32d18a8));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d14 + 0x32d18b4));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d18 + 0x32d18c0));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d1c + 0x32d18cc));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d20 + 0x32d18d8));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d24 + 0x32d18e4));
    func_0x01438628(*(undefined4 *)(_UNK_032d1d28 + 0x32d18f0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x835f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032d1d2c + 0x32d1964) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = 0;
    iVar1 = func_0x032d2dac(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x032d2e90(iVar1,param_3,0);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_032d1d30 + 0x32d19d0);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_032d1d34 + 0x32d19e4));
        if (*(int *)(**(int **)(_UNK_032d1d38 + 0x32d19fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032d1d3c + 0x32d1a1c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_032d1d40 + 0x32d1ae8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x032d2dac(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x032d32a4(iVar3,0);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_032d1d44 + 0x32d1b40));
          iVar3 = func_0x032d2dac(0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x032d3310(0);
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x033004b8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_032d1d48 + 0x32d1a64) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032d1d4c + 0x32d1a80));
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
        func_0x020257a4(iVar3,0x2bf,uVar2,**(undefined4 **)(_UNK_032d1d50 + 0x32d1bfc),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_032d1d54 + 0x32d1c34) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_032d1d58 + 0x32d1c90));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6f;
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
    iVar1 = func_0x029540a4(0x835f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

