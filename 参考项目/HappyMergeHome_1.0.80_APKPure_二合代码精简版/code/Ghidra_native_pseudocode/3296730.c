
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032a6730(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_032a6bc4 + 0x32a6754);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a6bc8 + 0x32a6768));
    func_0x01438628(*(undefined4 *)(_UNK_032a6bcc + 0x32a6774));
    func_0x01438628(*(undefined4 *)(_UNK_032a6bd0 + 0x32a6780));
    func_0x01438628(*(undefined4 *)(_UNK_032a6bd4 + 0x32a678c));
    func_0x01438628(*(undefined4 *)(_UNK_032a6bd8 + 0x32a6798));
    func_0x01438628(*(undefined4 *)(_UNK_032a6bdc + 0x32a67a4));
    func_0x01438628(*(undefined4 *)(_UNK_032a6be0 + 0x32a67b0));
    func_0x01438628(*(undefined4 *)(_UNK_032a6be4 + 0x32a67bc));
    func_0x01438628(*(undefined4 *)(_UNK_032a6be8 + 0x32a67c8));
    func_0x01438628(*(undefined4 *)(_UNK_032a6bec + 0x32a67d4));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8266,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032a6bf0 + 0x32a6844) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032a3fc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x032a6c20(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_032a6bf4 + 0x32a68a8);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_032a6bf8 + 0x32a68bc));
        if (*(int *)(**(int **)(_UNK_032a6bfc + 0x32a68d4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032a6c00 + 0x32a68f4));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_032a6c04 + 0x32a69c0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_032a3fc4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x032a6fe4(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_032a6c08 + 0x32a6a10));
          iVar3 = FUN_032a3fc4();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
          iVar3 = func_0x032a7050();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x032b7220(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_032a6c0c + 0x32a693c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032a6c10 + 0x32a6958));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_032a6c14 + 0x32a6ac4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_032a6c18 + 0x32a6afc) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_032a6c1c + 0x32a6b58));
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
    iVar1 = func_0x029540a4(0x8266,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

