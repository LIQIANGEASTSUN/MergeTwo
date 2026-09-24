/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/PlayerModel.txt
 * Cpp2IL method: System.Void CleanupPocket()
 * Ghidra function entry: 0366cabc
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0391021c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0366cd88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03910220) */
/* WARNING: Removing unreachable block (ram,0x03910224) */
/* WARNING: Removing unreachable block (ram,0x03910240) */
/* WARNING: Removing unreachable block (ram,0x03910258) */
/* WARNING: Removing unreachable block (ram,0x03910290) */
/* WARNING: Removing unreachable block (ram,0x039102a8) */
/* WARNING: Removing unreachable block (ram,0x03910304) */
/* WARNING: Removing unreachable block (ram,0x0391030c) */
/* WARNING: Removing unreachable block (ram,0x0391031c) */
/* WARNING: Removing unreachable block (ram,0x03910338) */
/* WARNING: Removing unreachable block (ram,0x03910340) */
/* WARNING: Removing unreachable block (ram,0x03910368) */
/* WARNING: Removing unreachable block (ram,0x0391034c) */
/* WARNING: Removing unreachable block (ram,0x03910358) */
/* WARNING: Removing unreachable block (ram,0x03910378) */
/* WARNING: Removing unreachable block (ram,0x03910388) */
/* WARNING: Removing unreachable block (ram,0x039103cc) */
/* WARNING: Removing unreachable block (ram,0x039103d4) */
/* WARNING: Removing unreachable block (ram,0x039103fc) */
/* WARNING: Removing unreachable block (ram,0x039103e0) */
/* WARNING: Removing unreachable block (ram,0x039103ec) */
/* WARNING: Removing unreachable block (ram,0x0391040c) */
/* WARNING: Removing unreachable block (ram,0x03910488) */
/* WARNING: Removing unreachable block (ram,0x039104a4) */
/* WARNING: Removing unreachable block (ram,0x039104ac) */
/* WARNING: Removing unreachable block (ram,0x039104d4) */
/* WARNING: Removing unreachable block (ram,0x039104b8) */
/* WARNING: Removing unreachable block (ram,0x039104c4) */
/* WARNING: Removing unreachable block (ram,0x039104e0) */
/* WARNING: Removing unreachable block (ram,0x03910510) */
/* WARNING: Removing unreachable block (ram,0x03910674) */
/* WARNING: Removing unreachable block (ram,0x03910518) */
/* WARNING: Removing unreachable block (ram,0x03910528) */
/* WARNING: Removing unreachable block (ram,0x03910530) */
/* WARNING: Removing unreachable block (ram,0x03910558) */
/* WARNING: Removing unreachable block (ram,0x0391053c) */
/* WARNING: Removing unreachable block (ram,0x03910548) */
/* WARNING: Removing unreachable block (ram,0x03910564) */
/* WARNING: Removing unreachable block (ram,0x039105e8) */
/* WARNING: Removing unreachable block (ram,0x03910574) */
/* WARNING: Removing unreachable block (ram,0x03910678) */
/* WARNING: Removing unreachable block (ram,0x0391057c) */
/* WARNING: Removing unreachable block (ram,0x0391058c) */
/* WARNING: Removing unreachable block (ram,0x03910594) */
/* WARNING: Removing unreachable block (ram,0x039105bc) */
/* WARNING: Removing unreachable block (ram,0x039105a0) */
/* WARNING: Removing unreachable block (ram,0x039105ac) */
/* WARNING: Removing unreachable block (ram,0x039105c8) */
/* WARNING: Removing unreachable block (ram,0x0391067c) */
/* WARNING: Removing unreachable block (ram,0x03910680) */
/* WARNING: Removing unreachable block (ram,0x03910684) */
/* WARNING: Removing unreachable block (ram,0x039106a0) */
/* WARNING: Removing unreachable block (ram,0x039106cc) */
/* WARNING: Removing unreachable block (ram,0x039106ac) */
/* WARNING: Removing unreachable block (ram,0x039105f0) */
/* WARNING: Removing unreachable block (ram,0x039105f8) */
/* WARNING: Removing unreachable block (ram,0x03910608) */
/* WARNING: Removing unreachable block (ram,0x03910610) */
/* WARNING: Removing unreachable block (ram,0x03910638) */
/* WARNING: Removing unreachable block (ram,0x0391061c) */
/* WARNING: Removing unreachable block (ram,0x03910628) */
/* WARNING: Removing unreachable block (ram,0x03910644) */
/* WARNING: Removing unreachable block (ram,0x03910650) */
/* WARNING: Removing unreachable block (ram,0x03910654) */
/* WARNING: Removing unreachable block (ram,0x039105d8) */
/* WARNING: Removing unreachable block (ram,0x0366cd8c) */
/* WARNING: Removing unreachable block (ram,0x0366cd90) */
/* WARNING: Removing unreachable block (ram,0x0366cdc8) */
/* WARNING: Removing unreachable block (ram,0x0366ce20) */
/* WARNING: Removing unreachable block (ram,0x0366cdf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0366cabc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000005e2d6ce & 1) == 0) {
    func_0x0249f8e4(&DAT_05a18690);
    func_0x0249f8e4(&DAT_05a18678);
    func_0x0249f8e4(&DAT_05a18710);
    func_0x0249f8e4(&DAT_05a18718);
    func_0x0249f8e4(&DAT_059d02d0);
    func_0x0249f8e4(&DAT_059e2678);
    bRam0000000005e2d6ce = 1;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    lVar2 = func_0x0249fb80(_DAT_059d02d0);
    func_0x0282ee2c(lVar2,_DAT_05a18678);
    if (lVar2 != 0) {
      uStack_48 = 0x36ae;
      func_0x025a1da8(lVar2,&uStack_48,_DAT_05a18690);
      iVar1 = *(int *)(lVar2 + 0x18);
      if (iVar1 < 1) {
        return;
      }
      iVar4 = 0;
      while( true ) {
        lVar5 = *(long *)(param_1 + 0x218);
        if (*(int *)(_DAT_059e2678 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar6 = **(undefined8 **)(_DAT_059e2678 + 0xb8);
        func_0x0282f3c4(lVar2,iVar4,&uStack_44,_DAT_05a18718);
        if (lVar5 == 0) break;
        func_0x03688d0c(lVar5,uVar6,0,uStack_44,0);
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) {
          return;
        }
      }
    }
    auVar7 = func_0x0249fb90();
    lVar2 = auVar7._0_8_;
    if (*(long *)(lVar2 + 0x2f8) != 0) {
      uVar3 = auVar7._8_8_ & 0xffffffff;
      func_0x03905fc4(*(long *)(lVar2 + 0x2f8),lVar2,uVar3,0);
      if (*(long *)(lVar2 + 0x308) != 0) {
        func_0x0340c3e4(*(long *)(lVar2 + 0x308),lVar2,uVar3,0);
        if (*(long *)(lVar2 + 0x3b0) != 0) {
          func_0x03423cc0(*(long *)(lVar2 + 0x3b0),lVar2,uVar3,0);
          if (*(long *)(lVar2 + 0x410) != 0) {
            func_0x03852460(*(long *)(lVar2 + 0x410),lVar2,uVar3,0);
            if (*(long *)(lVar2 + 0x3f8) != 0) {
              func_0x0352dfe4(*(long *)(lVar2 + 0x3f8),lVar2,uVar3,0);
              if (*(long *)(lVar2 + 0x428) != 0) {
                func_0x038ade6c(*(long *)(lVar2 + 0x428),lVar2,uVar3,0);
                if (*(long *)(lVar2 + 0x448) != 0) {
                  func_0x038db998(*(long *)(lVar2 + 0x448),lVar2,uVar3,0);
                  if ((*(long *)(lVar2 + 0x488) != 0) &&
                     (func_0x0344a0b0(*(long *)(lVar2 + 0x488),lVar2,uVar3,0),
                     *(long *)(lVar2 + 0x4e8) != 0)) {
                    if ((bRam0000000005e2ef9a & 1) == 0) {
                      func_0x0249f8e4(&DAT_05a06898,lVar2,uVar3,0);
                      func_0x0249f8e4(&DAT_05a068a0);
                      func_0x0249f8e4(&DAT_05a44ed0);
                      func_0x0249f8e4(&DAT_059c6010);
                      func_0x0249f8e4(&DAT_059df598);
                      func_0x0249f8e4(&DAT_059ca370);
                      func_0x0249f8e4(&DAT_059cb6c8);
                      func_0x0249f8e4(&DAT_059df6e0);
                      func_0x0249f8e4(&DAT_059dfe60);
                      func_0x0249f8e4(&DAT_059cd598);
                      func_0x0249f8e4(&DAT_05a0e760);
                      func_0x0249f8e4(&DAT_05a1fd40);
                      func_0x0249f8e4(&DAT_05a1fd60);
                      func_0x0249f8e4(&DAT_05a21380);
                      func_0x0249f8e4(&DAT_05a28ee0);
                      func_0x0249f8e4(&DAT_05a2aaf0);
                      func_0x0249f8e4(&DAT_05a6be28);
                      func_0x0249f8e4(&DAT_059f14f8);
                      bRam0000000005e2ef9a = 1;
                    }
                    func_0x0249fb80(_DAT_059f14f8);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x0249fb90();
    if ((bRam0000000005e2d668 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a19700);
      func_0x0249f8e4(&DAT_05a19710);
      func_0x0249f8e4(&DAT_059d4898);
      func_0x0249f8e4(&DAT_05a6c158);
      func_0x0249f8e4(&DAT_059f1788);
      bRam0000000005e2d668 = 1;
    }
    func_0x0249fb80(_DAT_059f1788);
    return;
  }
  return;
}

