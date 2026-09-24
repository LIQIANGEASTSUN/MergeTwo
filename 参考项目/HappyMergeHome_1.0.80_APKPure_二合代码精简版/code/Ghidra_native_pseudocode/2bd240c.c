
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be240c(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(_UNK_02be25c0 + 0x2be242c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be25c4 + 0x2be2440));
    func_0x01438628(*(undefined4 *)(_UNK_02be25c8 + 0x2be244c));
    func_0x01438628(*(undefined4 *)(_UNK_02be25cc + 0x2be2458));
    func_0x01438628(*(undefined4 *)(_UNK_02be25d0 + 0x2be2464));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5d0f,0);
  if (iVar3 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0xc) == 1)) {
      if (*(int *)(**(int **)(_UNK_02be25d4 + 0x2be24dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be25d8 + 0x2be24f8));
      uVar6 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x029a6fa8(iVar3,uVar6,0);
      if (iVar3 != 0) {
        if (*(int *)(**(int **)(_UNK_02be25dc + 0x2be2538) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02be25e0 + 0x2be2554));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02c4bba8(iVar4,iVar3,0);
        if (iVar4 != 0) {
          if ((param_3 == 0) || (iVar4 = *(int *)(iVar3 + 0xe0), iVar4 < 1)) {
            iVar4 = FUN_02bd67a0(param_1,iVar3);
          }
          pcVar5 = (char *)(_UNK_026f72bc + 0x26f7234);
          if (*pcVar5 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_026f72c0 + 0x26f7248),iVar4,0);
            func_0x01438628(*(undefined4 *)(_UNK_026f72c4 + 0x26f7254));
            *pcVar5 = '\x01';
          }
          if (*(int *)(param_2 + 0x40) == iVar4) {
            return;
          }
          piVar1 = *(int **)(_UNK_026f72c8 + 0x26f7274);
          *(int *)(param_2 + 0x40) = iVar4;
          if (*(int *)(*piVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f72cc + 0x26f7294));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(uint *)(iVar3 + 0x60);
          *(uint *)(iVar3 + 0x60) = uVar2 + 1;
          *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
          return;
        }
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5d0f,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02869ba4(iVar3,param_1,param_2,param_3,0);
  }
  return;
}

