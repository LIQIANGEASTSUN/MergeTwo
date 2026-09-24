
/* WARNING: Possible PIC construction at 0x02bf17c8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf1628(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_02bf1800 + 0x2bf1648);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf1804 + 0x2bf165c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf1808 + 0x2bf1668));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xe9f,0);
  if (iVar3 == 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar3 != 0) {
      iVar3 = func_0x014e94d8(param_1,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024ef984(iVar3,0);
      if (iVar3 != 0) {
        iVar3 = func_0x014e94d8(param_1,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024efc2c(iVar3,0);
        if (iVar3 != 0) {
          if (0 < (int)param_2) {
            iVar3 = *(int *)(param_1 + 0x44);
            iVar4 = *(int *)(param_1 + 0x50);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar3 + 0xc) <= param_2) {
              func_0x014388e8();
            }
            uVar6 = *(undefined4 *)(iVar3 + param_2 * 4 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0594(iVar4,uVar6,**(undefined4 **)(_UNK_02bf180c + 0x2bf178c));
            if (iVar3 == 0) {
              return;
            }
          }
          piVar7 = (int *)(param_1 + 0x58);
          if (*piVar7 == 0) {
            uVar6 = func_0x02c00e90(param_1,param_3);
            uVar6 = func_0x024ef208(param_1,uVar6,0);
            *(undefined4 *)(param_1 + 0x58) = uVar6;
          }
          else {
            func_0x024f0fd8(param_1,*piVar7,0);
            *(undefined4 *)(param_1 + 0x58) = 0;
          }
          if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
            return;
          }
          puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar7 >> 0x11) * 4);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
          return;
        }
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0xe9f,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028960bc(iVar3,param_1,param_2,param_3,0);
  }
  return;
}

