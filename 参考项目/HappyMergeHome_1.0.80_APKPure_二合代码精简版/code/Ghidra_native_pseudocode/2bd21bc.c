
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be21bc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_02be23d8 + 0x2be21dc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be23dc + 0x2be21f0));
    func_0x01438628(*(undefined4 *)(_UNK_02be23e0 + 0x2be21fc));
    func_0x01438628(*(undefined4 *)(_UNK_02be23e4 + 0x2be2208));
    func_0x01438628(*(undefined4 *)(_UNK_02be23e8 + 0x2be2214));
    func_0x01438628(*(undefined4 *)(_UNK_02be23ec + 0x2be2220));
    func_0x01438628(*(undefined4 *)(_UNK_02be23f0 + 0x2be222c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d0e,0);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0xc) == 1)) {
      if (*(int *)(**(int **)(_UNK_02be23f4 + 0x2be22a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be23f8 + 0x2be22c0));
      uVar4 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029a6fa8(iVar1,uVar4,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02be23fc + 0x2be2300) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be2400 + 0x2be231c));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c4baac(iVar2,iVar1,0);
        if (iVar2 != 0) {
          uVar4 = FUN_02bd7af0(param_1,iVar1);
          FUN_026f7160(param_2,uVar4,0);
          if (*(int *)(**(int **)(_UNK_02be2404 + 0x2be2370) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be2408 + 0x2be238c));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar5 = func_0x026ffbe0(iVar1,0);
          uVar5 = func_0x014e6e04((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
          FUN_026f72d8(param_2,uVar4,(int)uVar5,uVar4,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d0e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869ba4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

