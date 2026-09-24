
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032d3a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032d3e94 + 0x32d3a24);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d3e98 + 0x32d3a38));
    func_0x01438628(*(undefined4 *)(_UNK_032d3e9c + 0x32d3a44));
    func_0x01438628(*(undefined4 *)(_UNK_032d3ea0 + 0x32d3a50));
    func_0x01438628(*(undefined4 *)(_UNK_032d3ea4 + 0x32d3a5c));
    func_0x01438628(*(undefined4 *)(_UNK_032d3ea8 + 0x32d3a68));
    func_0x01438628(*(undefined4 *)(_UNK_032d3eac + 0x32d3a74));
    func_0x01438628(*(undefined4 *)(_UNK_032d3eb0 + 0x32d3a80));
    func_0x01438628(*(undefined4 *)(_UNK_032d3eb4 + 0x32d3a8c));
    func_0x01438628(*(undefined4 *)(_UNK_032d3eb8 + 0x32d3a98));
    func_0x01438628(*(undefined4 *)(_UNK_032d3ebc + 0x32d3aa4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x83a9,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032d3ec0 + 0x32d3b14) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032d2dac();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_032d2e90(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_032d3ec4 + 0x32d3b78);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_032d3ec8 + 0x32d3b8c));
        if (*(int *)(**(int **)(_UNK_032d3ecc + 0x32d3ba4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032d3ed0 + 0x32d3bc4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_032d3ed4 + 0x32d3c90) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_032d2dac();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_032d32a4(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_032d3ed8 + 0x32d3ce0));
          iVar3 = FUN_032d2dac();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_032d3310();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x033004b8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_032d3edc + 0x32d3c0c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032d3ee0 + 0x32d3c28));
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
        func_0x020257a4(iVar3,0x2bf,uVar2,**(undefined4 **)(_UNK_032d3ee4 + 0x32d3d94),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_032d3ee8 + 0x32d3dcc) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_032d3eec + 0x32d3e28));
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
    iVar1 = func_0x029540a4(0x83a9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

