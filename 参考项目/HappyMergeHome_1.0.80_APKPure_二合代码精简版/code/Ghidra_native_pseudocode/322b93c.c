
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0323b93c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0323bdd0 + 0x323b960);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323bdd4 + 0x323b974));
    func_0x01438628(*(undefined4 *)(_UNK_0323bdd8 + 0x323b980));
    func_0x01438628(*(undefined4 *)(_UNK_0323bddc + 0x323b98c));
    func_0x01438628(*(undefined4 *)(_UNK_0323bde0 + 0x323b998));
    func_0x01438628(*(undefined4 *)(_UNK_0323bde4 + 0x323b9a4));
    func_0x01438628(*(undefined4 *)(_UNK_0323bde8 + 0x323b9b0));
    func_0x01438628(*(undefined4 *)(_UNK_0323bdec + 0x323b9bc));
    func_0x01438628(*(undefined4 *)(_UNK_0323bdf0 + 0x323b9c8));
    func_0x01438628(*(undefined4 *)(_UNK_0323bdf4 + 0x323b9d4));
    func_0x01438628(*(undefined4 *)(_UNK_0323bdf8 + 0x323b9e0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7fcf,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0323bdfc + 0x323ba50) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032356b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03239dbc(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0323be00 + 0x323bab4);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0323be04 + 0x323bac8));
        if (*(int *)(**(int **)(_UNK_0323be08 + 0x323bae0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0323be0c + 0x323bb00));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0323be10 + 0x323bbcc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0323a1d0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0323be14 + 0x323bc1c));
          iVar3 = FUN_032356b8();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0323a23c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03266d7c(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0323be18 + 0x323bb48) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0323be1c + 0x323bb64));
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
        func_0x020257a4(iVar3,0x358,uVar2,**(undefined4 **)(_UNK_0323be20 + 0x323bcd0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0323be24 + 0x323bd08) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0323be28 + 0x323bd64));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x86;
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
    iVar1 = func_0x029540a4(0x7fcf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

